# A source code for facial detection in python using openCV
import cv2
import numpy as np
face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')

cap = cv2.VideoCapture(0)

while True:
    _, img = cap.read()

    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

    faces = face_cascade.detectMultiScale(gray, 1.1, 4)

    for (x, y, w, h) in faces:
        cv2.rectangle(img, (x, y), (x+w,y+h), (0,255,0), thickness=2)

    cv2.imshow("img", img)

    k = cv2.waitKey(30) & 0xff
    if k==27:
        break

cap.release()
