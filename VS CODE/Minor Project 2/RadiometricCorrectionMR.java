import java.io.IOException;
import java.io.InputStream;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.nio.ByteBuffer;

import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.BytesWritable;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;

import javax.imageio.ImageIO;
import java.awt.image.BufferedImage;

import com.google.cloud.storage.Blob;
import com.google.cloud.storage.Bucket;
import com.google.cloud.storage.Storage;
import com.google.cloud.storage.StorageOptions;

public class RadiometricCorrectionMR {

    public static class RadiometricCorrectionMapper extends Mapper<Object, Text, Text, BytesWritable> {

        private static final String INPUT_PREFIX = "gs://satellite-images-minor-project/input/";
        private static final String OUTPUT_PREFIX = "gs://satellite-images-minor-project/output/";
        private static final String REFERENCE_URI = "gs://satellite-images-minor-project/reference.tif";

        private Storage storage;
        private Blob referenceBlob;

        @Override
        protected void setup(Context context) throws IOException, InterruptedException {
            Configuration config = context.getConfiguration();
            storage = StorageOptions.getDefaultInstance().getService();
            referenceBlob = storage.get(BlobId.of(REFERENCE_URI));
        }

        @Override
        public void map(Object key, Text value, Context context) throws IOException, InterruptedException {
            String uri = value.toString();
            Blob imageBlob = storage.get(BlobId.of(uri));
            BufferedImage image = ImageIO.read(new ByteArrayInputStream(imageBlob.getContent()));
            BufferedImage reference = ImageIO.read(new ByteArrayInputStream(referenceBlob.getContent()));
            BufferedImage correctedImage = performRadiometricCorrection(image, reference);
            byte[] imageBytes = bufferedImageToByteArray(correctedImage);
            BytesWritable outputValue = new BytesWritable(ByteBuffer.wrap(imageBytes));
            context.write(new Text(uri), outputValue);
        }

        private static BufferedImage performRadiometricCorrection(BufferedImage image, BufferedImage reference) {
            // Perform radiometric correction on the image
            // ...
            int width = image.getWidth();
            int height = image.getHeight();
            int[] imagePixels = new int[width * height];
            int[] referencePixels = new int[width * height];
            image.getRGB(0, 0, width, height, imagePixels, 0, width);
            reference.getRGB(0, 0, width, height, referencePixels, 0, width);

            // Perform radiometric correction on the image
            int[] correctedPixels = new int[width * height];
            for (int i = 0; i < width * height; i++) {
                // Extract the red and infrared channels from the image and reference
                int imageRed = (imagePixels[i] >> 16) & 0xff;
                int imageInfrared = (imagePixels[i] >> 8) & 0xff;
                int referenceRed = (referencePixels[i] >> 16) & 0xff;
                int referenceInfrared = (referencePixels[i] >> 8) & 0xff;

                // Compute the NDVI for the pixel
                float ndvi = computeNDVI(imageRed, imageInfrared, referenceRed, referenceInfrared);

                // Scale the NDVI value to the 0-255 range and pack it into an RGB pixel
                int ndviScaled = (int) (255 * ndvi);
                correctedPixels[i] = ndviScaled | (ndviScaled << 8) | (ndviScaled << 16);
            }
            BufferedImage correctedImage = new BufferedImage(width, height, BufferedImage.TYPE_INT_RGB);
            correctedImage.setRGB(0, 0, width, height, correctedPixels, 0, width);
            return correctedImage;
        }

        private static byte[] bufferedImageToByteArray(BufferedImage image) throws IOException {
            ByteArrayOutputStream os = new ByteArrayOutputStream();
            ImageIO.write(image, "TIFF", os);
            return os.toByteArray();
        }
    }

    public static void main(String[] args) throws Exception {
        Configuration conf = new Configuration();
        Job job = Job.getInstance(conf, "Radiometric Correction MR");
        job.setJarByClass(RadiometricCorrectionMR.class);
        job.setMapperClass(RadiometricCorrectionMapper.class);
        job.setOutputKeyClass(Text.class);
        job.setOutputValueClass(BytesWritable.class);
        FileInputFormat.addInputPath(job, new Path(INPUT_PREFIX));
        FileOutputFormat.setOutputPath(job, new Path(OUTPUT_PREFIX));
        System.exit(job.waitForCompletion(true) ? 0 : 1);
    }
}
