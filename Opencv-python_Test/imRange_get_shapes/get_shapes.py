# -*- codeing = utf-8 -*-
# -*- coding: utf-8 -*-
# @Time    : 2021/3/25 22:48
# @Author  : 谭洋 202031001951
# @Email   : 1767774755@qq.com
# @File    : get_shapes.py
# @Software: PyCharm
import cv2

img=cv2.imread("img.png")
gry_img = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
img_Blur = cv2.GaussianBlur(gry_img,(7,7),1)

cv2.imshow("input",img)
cv2.imshow("gray",gry_img)
cv2.imshow("img_Blur",img_Blur)
cv2.waitKey(0)




