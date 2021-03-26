# -*- codeing = utf-8 -*-
# -*- coding: utf-8 -*-
# @Time    : 2021/3/25 21:51
# @Author  : 谭洋 202031001951
# @Email   : 1767774755@qq.com
# @File    : imRange_.py
# @Software: PyCharm
import cv2
import numpy as np
def empty(s):
    pass
cap = cv2.VideoCapture(0)
frameWidth = 640
frameHeight = 480
cap.set(3 ,frameWidth)
cap.set(4 ,frameHeight)
cap.set(10,150)

img=cv2.imread("org.jpg")
cv2.namedWindow("trackBars")
cv2.resizeWindow("trackBars",640,240)
cv2.createTrackbar("Hue Min","trackBars",0,179,empty)   #hue——杆名  trackbars——窗口名  0——初始值 179——最大值 empty——不清楚
cv2.createTrackbar("Hue Max","trackBars",179,179,empty)
cv2.createTrackbar("Sat Min","trackBars",0,255,empty)
cv2.createTrackbar("Sat Max","trackBars",255,255,empty)
cv2.createTrackbar("Val Min","trackBars",134,255,empty)
cv2.createTrackbar("Val Max","trackBars",255,255,empty)


while True:
    success,img=cap.read()
    cv2.imshow("Result",img)
    imgHSV=cv2.cvtColor(img,cv2.COLOR_BGR2HSV)

    h_min = cv2.getTrackbarPos("Hue Min", "trackBars")
    h_max = cv2.getTrackbarPos("Hue Max", "trackBars")
    s_min = cv2.getTrackbarPos("Sat Min", "trackBars")
    s_max = cv2.getTrackbarPos("Sat Max", "trackBars")
    v_min = cv2.getTrackbarPos("Val Min", "trackBars")
    v_max = cv2.getTrackbarPos("Val Max", "trackBars")
    lowerb = np.array([h_min, s_min, v_min])
    upperb = np.array([h_max, s_max, v_max])
    print(h_min, h_max, s_min, s_max, v_min, v_max)  # 调整以获取适当的HSV值创建合适的蒙版

    mask = cv2.inRange(img, lowerb, upperb)  # 蒙版图像

    imgResult = cv2.bitwise_and(img, img, mask=mask)  # 创建蒙版

    cv2.imshow("org img", img)
    cv2.imshow("HSV", mask)
    cv2.imshow("result", imgResult)
    cv2.waitKey(1)

    if cv2.waitKey(1)&0xff==ord('q'):

        break


img=cv2.imread("org.jpg")
cv2.namedWindow("trackBars")
cv2.resizeWindow("trackBars",640,240)
cv2.createTrackbar("Hue Min","trackBars",0,179,empty)   #hue——杆名  trackbars——窗口名  0——初始值 179——最大值 empty——不清楚
cv2.createTrackbar("Hue Max","trackBars",179,179,empty)
cv2.createTrackbar("Sat Min","trackBars",0,255,empty)
cv2.createTrackbar("Sat Max","trackBars",255,255,empty)
cv2.createTrackbar("Val Min","trackBars",134,255,empty)
cv2.createTrackbar("Val Max","trackBars",255,255,empty)

while True:
    h_min=cv2.getTrackbarPos("Hue Min","trackBars")
    h_max=cv2.getTrackbarPos("Hue Max","trackBars")
    s_min=cv2.getTrackbarPos("Sat Min","trackBars")
    s_max=cv2.getTrackbarPos("Sat Max","trackBars")
    v_min=cv2.getTrackbarPos("Val Min","trackBars")
    v_max=cv2.getTrackbarPos("Val Max","trackBars")
    lowerb = np.array([h_min,s_min,v_min])
    upperb = np.array([h_max,s_max,v_max])
    print(h_min,h_max,s_min,s_max,v_min,v_max)#调整以获取适当的HSV值创建合适的蒙版


    mask=cv2.inRange(img,lowerb,upperb)#蒙版图像

    imgResult = cv2.bitwise_and(img,img,mask=mask)#创建蒙版


    cv2.imshow("org img",img)
    cv2.imshow("HSV",mask)
    cv2.imshow("result",imgResult)
    cv2.waitKey(1)


