import PIL
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.image as img
from PIL import Image
from PIL import ImageOps

def PSNR(im1,im2):
    R2 = np.amax(im1)**2
    MSE = np.sum(np.power(np.subtract(im1,im2),2))
    MSE /= (im1.size[0]*im1.size[1])
    PSNR = 10*np.log10(R2/MSE)
    return PSNR

'''
Q1P1: Read color version of the image "lena.png", 
Convert colored lena image to grayscale image.
'''

lena = Image.open("C:/Users/Manu/Downloads/ImageProcessing/PA1_Images/lena512.bmp")

lenaGrayscale = ImageOps.grayscale(lena)
#lenaGrayscale.show()

'''
Q1P2: Resize (scale down) the grayscale lena image to half its original size.
Then, resize (scale up) it up back to the 
original size using resize() with PIL.Image.NEAREST
'''

lenaOgWidth, lenaOgHeight = lenaGrayscale.size
lenaOgSize = (lenaOgWidth, lenaOgHeight)
lenaHalfSize = (lenaOgWidth//2,lenaOgHeight//2)

lenaScaleDown = lenaGrayscale.resize(lenaHalfSize)
#lenaScaleDown.show()

lenaResizeNearest = lenaScaleDown.resize(lenaOgSize, Image.NEAREST)
#lenaResizeNearest.show()

#lenaResizeNearest=lenaResizeNearest.save()

'''
Q1P3:Resize (scale down) the grayscale lena image to half its original size. 
Then, resize (scale up) it up back to the
original size using resize() with PIL.Image.BILINEAR
'''
lenaResizeBilinear = lenaScaleDown.resize(lenaOgSize, Image.BILINEAR)
#lenaResizeBilinear.show()

#lenaResizeBilinear=lenaResizeBilinear.save()

'''
Q1P4:Resize (scale down) the grayscale lena image to half its original size. 
Then, resize (scale up) it up back to the
original size using resize() with PIL.Image.BICUBIC
'''

lenaResizeBicubic = lenaScaleDown.resize(lenaOgSize, Image.BICUBIC)
#lenaResizeBicubic.show()

#lenaResizeBicubic=lenaResizeBicubic.save()

'''
Q1P5:Your script should display the results as follows using matplotlib 
along with the PSNR values w.r.t original image below the result image.
'''

plt.imshow(lenaResizeNearest)