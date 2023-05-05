import numpy as np
import rasterio
from pyspark import SparkConf, SparkContext
from pyspark.sql import SparkSession

def performRadiometricCorrection(inputImageUris):
    # Initialize lists to store the corrected channels
    correctedChannels = []

#inputImageUris is a list of all set of images, if we take an element of it 
#and then index it then it is supposed it is give out of index error
    for i, inputImageUri in enumerate(inputImageUris):
        with rasterio.open(inputImageUri) as src:
            # Read in the red and blue channels
            blueChannel = src.read(1)
            redChannel = src.read(4)
            
            # Compute the mean and standard deviation of the red and blue channels
            redMean = np.mean(redChannel)
            blueMean = np.mean(blueChannel)
            redStdDev = np.std(redChannel)
            blueStdDev = np.std(blueChannel)

            # Compute the scale and offset factors for each channel
            redScaleFactor = 1 / redStdDev
            blueScaleFactor = 1 / blueStdDev
            redOffset = -redMean * redScaleFactor
            blueOffset = -blueMean * blueScaleFactor

            # Append the scale and offset factors to the lists
            if i == 0:
                # For the first input image, create the lists
                scaleFactors = [redScaleFactor, 0, blueScaleFactor]
                offsets = [redOffset, 0, blueOffset]
            else:
                # For subsequent input images, append to the existing lists
                scaleFactors += [redScaleFactor, 0, blueScaleFactor]
                offsets += [redOffset, 0, blueOffset]

            # Apply radiometric correction to the input image
            correctedRedChannel = (redChannel * redScaleFactor + redOffset).astype(np.uint16)
            correctedBlueChannel = (blueChannel * blueScaleFactor + blueOffset).astype(np.uint16)

            # Append the corrected channels to the list
            correctedChannels += [correctedRedChannel, np.zeros_like(correctedRedChannel), correctedBlueChannel]

    # Write the corrected image to Google Cloud Storage
    with rasterio.open(
        "D:/content/output/corrected.tiff",
        "w",
        driver="GTiff",
        width=src.width,
        height=src.height,
        count=3,
        dtype=np.uint16,
        crs=src.crs,
        transform=src.transform,
    ) as dst:
        dst.write(correctedChannels[0], 1)
        dst.write(np.zeros_like(correctedChannels[0]), 2)
        dst.write(correctedChannels[1], 3)

    print("Radiometric correction complete")


if __name__ == "__main__":
    conf = SparkConf().setAppName("Radiometric Correction")
    sc = SparkContext(conf=conf)
    spark = SparkSession.builder.appName("Radiometric Correction").getOrCreate()

    INPUT_PREFIX = "D:/content/input2/"
    OUTPUT_PREFIX = "D:/content/output/"

    inputImageUris = [INPUT_PREFIX + "band1.TIFF", INPUT_PREFIX + "band2.TIFF", INPUT_PREFIX + "band4.TIFF",
                      INPUT_PREFIX + "band5.TIFF", INPUT_PREFIX + "band6.TIFF", INPUT_PREFIX + "band7.TIFF"]
    print(len(inputImageUris))
    performRadiometricCorrection(inputImageUris)

    sc.stop()

