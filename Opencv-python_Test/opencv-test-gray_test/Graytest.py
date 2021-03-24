# -*- codeing = utf-8 -*-
# -*- coding: utf-8 -*-
# @Time    : 2021/3/24 22:27
# @Author  : 谭洋 202031001951
# @Email   : 1767774755@qq.com
# @File    : Graytest.py
# @Software: PyCharm
import cv2
import numpy as np


img=cv2.imread("img.jpg")
kernel=np.ones((5,5),np.uint8)#内核矩阵

imgGrey=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
imgBlur=cv2.GaussianBlur(imgGrey,(7,7),0)#模糊处理，待理解
Blur_roal=cv2.GaussianBlur(img,(7,7),0)#模糊处理，参数调整
imgCanny=cv2.Canny(img,50,100)
imgDialation=cv2.dilate(imgCanny,kernel,iterations=1) #图像膨胀 使线条闭合 改变参数kernel能实现不同效果
imgErode=cv2.erode(imgDialation,kernel,iterations=1)

cv2.imshow("Blur",imgBlur)
cv2.imshow("roal",img)
cv2.imshow("Blur_roal",Blur_roal)
cv2.imshow("greypicture",imgGrey)
#cv2.waitKey(500)
cv2.imshow("imgcanny",imgCanny)
cv2.imshow("Dialate",imgDialation)
cv2.imshow("imgErode",imgErode)
cv2.waitKey(0)


