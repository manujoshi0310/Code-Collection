import cv2
import numpy as np
from matplotlib import pyplot as plt

img = cv2.imread('F:\VS Code\Image Processing\image.jpg')
img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
img_gaussian = cv2.GaussianBlur(gray,(3,3),0)
 
#prewitt
kernelx = np.array([[1,1,1],[0,0,0],[-1,-1,-1]])
kernely = np.array([[-1,0,1],[-1,0,1],[-1,0,1]])
img_prewitt = cv2.filter2D(img_gaussian, -1, kernelx) + cv2.filter2D(img_gaussian, -1, kernely)
plt.imshow(img)
plt.title('Original')
plt.show()
plt.imshow(img_prewitt)
plt.title('Prewitt')
