'''
Program to convert any Image to Pattern

Input your Image URL or just press enter to see the default image.  

Created by Sayok Dey Majumder.

Github User handle : NeilSayok

Link to profile: https://github.com/NeilSayok

'''



import cv2
import imutils
import urllib.request
import numpy as np


url = input("Enter Url to your Image or Press Enter if you want to use default image\n")
if(url == ""):
    url = 'https://avatars.githubusercontent.com/u/21328143?v=4'
req = urllib.request.urlopen(url)
arr = np.asarray(bytearray(req.read()), dtype=np.uint8)
img = cv2.imdecode(arr, -1) # 'Load it as it is'
img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

img = imutils.resize(img, width=300,height=300)

thresh = 127
im_bw = 255 - cv2.threshold(img, thresh, 255, cv2.THRESH_BINARY)[1]

print(im_bw.shape)

with open("Out.txt", "w") as fh:

    for a in im_bw:
        for b in a:
            if(b == 255):
                fh.write("*")
            else:
                fh.write(" ")
        fh.write("\n")



