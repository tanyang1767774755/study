# -*- codeing = utf-8 -*-
# -*- coding: utf-8 -*-
# @Time    : 2021/3/26 23:12
# @Author  : 谭洋 202031001951
# @Email   : 1767774755@qq.com
# @File    : summary.py
# @Software: PyCharm
import cv2
import numpy as np

cap = cv2.VideoCapture(0)
frameWidth = 640
frameHeight = 480
cap.set(3 ,frameWidth)
cap.set(4 ,frameHeight)
cap.set(10,150)

myColors=[[79,179,0,255,92,255]
          [0]
          [0]]

while True:
    success,img=cap.read()
    cv2.imshow("result",img)
    imgHSV=cv2.cvtColor(img,cv2.COLOR_BGR2HSV)
    if cv2.waitKey(1)&0xff==ord('q'):
        break
def findColor(img,myColors):
    imgHSV=cv2.cvtColor(img,cv2.COLOR_BGR2HSV)
    lower = np.array(myColors[0][:3])
    upper = np.array(myColors[0][3:6])
    mask = cv2.inRange(imgHSV, lower, upper)
    cv2.imshow("img",mask)
