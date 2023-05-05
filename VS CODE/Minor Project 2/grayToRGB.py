import rasterio
from rasterio.plot import show

# Load the grayscale image
with rasterio.open('gs://satellite-images-minor-project/input/LC08_L2SP_144038_20230324_20230404_02_T1_SR_B1.TIF') as src:
    grayscale_data = src.read(1)

# Create an RGB image by assigning the grayscale data to different color channels
red = grayscale_data
green = grayscale_data
blue = grayscale_data

# Create a new RGB image with the assigned color channels
rgb_image = rasterio.plot.reshape_as_image([red, green, blue])

# Show the RGB image
show(rgb_image)