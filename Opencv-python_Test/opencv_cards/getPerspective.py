# -*- codeing = utf-8 -*-
# -*- coding: utf-8 -*-
# @Time    : 2021/3/25 10:25
# @Author  : 谭洋 202031001951
# @Email   : 1767774755@qq.com
# @File    : getPerspective.py
# @Software: PyCharm

import cv2
import numpy as np

img=cv2.imread("cards.jpg")
cv2.imshow("imput img",img)
width,hight = 250,350

pst1 = np.float32([[460,62],[689,196],[242,362],[408,529]])
pst2 = np.float32([[0,0],[width,0],[0,hight],[width,hight]])#进行透视变换矩阵
matrix = cv2.getPerspectiveTransform(pst1,pst2)  #进行变换
Perspect_img=cv2.warpPerspective(img,matrix,(width,hight))
cv2.imshow("warpPerspective",Perspect_img)
cv2.waitKey(0)
##################################  图片堆叠
img=cv2.imread("cards.jpg")

img_hstack = np.hstack((img,img))#  必须有相同的通道数
img_vstack = np.vstack((img,img))
cv2.imshow('img_hstack',img_hstack)
cv2.imshow("vstack",img_vstack)
cv2.waitKey(0)
###################################颜色检测
img=cv2.imread("cards.jpg")

img_color_hsv=cv2.cvtColor(img,cv2.COLOR_BGR2HSV)
cv2.imshow("COLOR_HSV",img_color_hsv)
cv2.waitKey(0)