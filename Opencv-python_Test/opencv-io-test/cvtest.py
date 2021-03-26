# -*- codeing = utf-8 -*-
# @Time:2021/2/20 17:24
# @Author:谭洋
# @File:opencv-io-test.py

import cv2


img=cv2.imread("img.jpg") #读取一张图片
cv2.imshow("input",img)   #打开一个窗口并且展示一张图片
cv2.waitKey(1000)         #窗口停留时间，参数表示停留时间，0一直打开



