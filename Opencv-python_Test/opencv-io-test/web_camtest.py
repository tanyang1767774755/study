# -*- codeing = utf-8 -*-
# -*- coding: utf-8 -*-
# @Time    : 2021/3/24 22:16
# @Author  : 谭洋 202031001951
# @Email   : 1767774755@qq.com
# @File    : web_camtest.py
# @Software: PyCharm

import cv2


cap=cv2.VideoCapture(0)     #参数表示网络摄像头的设备的id
cap.set(3,648)   #设置capture 参数
cap.set(4,480)
cap.set(10,100)

while True:
    success,img=cap.read()
    cv2.imshow("video",img)
    if cv2.waitKey(1)&0xff==ord("q"):
        break