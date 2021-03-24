# -*- codeing = utf-8 -*-
# -*- coding: utf-8 -*-
# @Time    : 2021/3/24 22:01
# @Author  : 谭洋 202031001951
# @Email   : 1767774755@qq.com
# @File    : vediotest.py
# @Software: PyCharm
import cv2

cap=cv2.VideoCapture("test.mp4")

while True:
    success, img=cap.read()
    cv2.imshow("Video",img)
    if cv2.waitKey(1) & 0xff==ord("q"):#待理解
        break