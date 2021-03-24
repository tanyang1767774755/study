# -*- codeing = utf-8 -*-
# -*- coding: utf-8 -*-
# @Time    : 2021/3/24 23:01
# @Author  : 谭洋 202031001951
# @Email   : 1767774755@qq.com
# @File    : opencv_imgResize_cropped.py
# @Software: PyCharm
import numpy as np
import cv2



img=cv2.imread("img.jpg")
print(img.shape)#显示图片的 （长 ，宽，通道数）
imgRsize=cv2.resize(img,(540,860))  #调整大小
imgCropped=img[250:800,300:900]#对图片进行裁剪  :先高 后 宽
cv2.imshow("imput",img)
#cv2.imshow("Resize",imgRsize)
cv2.imshow("img Cropped",imgCropped)
cv2.waitKey(0)


