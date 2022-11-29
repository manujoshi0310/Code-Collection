import numpy as np
import pandas as pd

dist = [10,15,17,26]

time = [0.3,0.47,0.55,1.2]

myDist = np.array(dist)
myTime = np.array(time)

speed = myDist/myTime

demo = pd.Series()

demo2 = ["g","r","e","a","t"]
data =np.array(demo2)

Series_d = pd.Series(data)

# print(Series_d)
# print(type(Series_d))

dict1 = {'a':0, 'b':3, 'c':2}

s = pd.Series([1,2,3,6,5,6], index=['a','a','c','d','e','f'])
pd.Series()
# print(s[:3])