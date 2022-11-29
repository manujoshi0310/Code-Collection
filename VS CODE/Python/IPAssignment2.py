import numpy as np
from wand.image import Image
import cv2
import random


def guassianNoise(img):
    img.noise("gaussian",attenuate=0.9)
    img.save(filename = r"C:\Users\Manu\Downloads\ImageProcessing\PA1_Images\jitendraGaussian.jpeg")

def saltAndPepperNoise(img):
    row , col = img.shape
    number_of_pixels = random.randint(300, 10000)
    
    for i in range(number_of_pixels):
        y_coord=random.randint(0, row - 1)
        x_coord=random.randint(0, col - 1)
        img[y_coord][x_coord] = 255
    
    number_of_pixels = random.randint(300 , 10000)
    
    for i in range(number_of_pixels):
        y_coord=random.randint(0, row - 1)
        x_coord=random.randint(0, col - 1)
        img[y_coord][x_coord] = 0
         
    return img

originalImage1 = Image(filename=r"C:\Users\Manu\Downloads\ImageProcessing\PA1_Images\jitendraDhariwal.jpeg")
originalImage = cv2.imread(filename=r"C:\Users\Manu\Downloads\ImageProcessing\PA1_Images\jitendraDhariwal.jpeg")

guassianNoise(originalImage1)
gaussianNoiseImage = cv2.imread(r"C:\Users\Manu\Downloads\ImageProcessing\PA1_Images\jitendraGaussian.jpeg")


originalImage2 = cv2.imread(r"C:\Users\Manu\Downloads\ImageProcessing\PA1_Images\jitendraDhariwal.jpeg", cv2.IMREAD_GRAYSCALE)
saltAndPepperNoiseImage = saltAndPepperNoise(originalImage2)
cv2.imwrite(r"C:\Users\Manu\Downloads\ImageProcessing\PA1_Images\saltAndPepperjitendraDhariwal.jpeg",saltAndPepperNoiseImage)
cv2.cvtColor()


