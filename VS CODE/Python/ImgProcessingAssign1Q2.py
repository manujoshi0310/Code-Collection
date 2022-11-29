import PIL
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.image as img
from PIL import Image
from PIL import ImageOps
from pandas import array

def ChSwap(im):
    rgb = np.array(im)
    for x in range(0,im.size[0]):
        for y in range(0,im.size[1]):
            rgb[x][y][1],rgb[x][y][2],rgb[x][y][0]=rgb[x][y][0],rgb[x][y][1],rgb[x][y][2]
            im.putpixel((x,y),tuple(rgb[x][y]))
    lenaGBR = im
    return lenaGBR
    

lena = Image.open("C:/Users/Manu/Downloads/ImageProcessing/PA1_Images/lena512.bmp")
lenaRGB = lena.convert('RGB').rotate(90)

lenaGBR = ChSwap(lenaRGB)

lenaGBR = lenaGBR.save("C:/Users/Manu/Downloads/ImageProcessing/PA1_Images/lenaGBR.bmp")

lenaGBRPrint = img.imread("C:/Users/Manu/Downloads/ImageProcessing/PA1_Images/lenaGBR.bmp")
plt.imshow(lenaGBRPrint)