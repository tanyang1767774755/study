
# -*- coding: utf-8 -*-
# @Time    : 2021/3/24 23:21
# @Author  : 谭洋 202031001951
# @Email   : 1767774755@qq.com
# @File    : img_write.py
# @Software: PyCharm

import cv2
import numpy as np

img = np.zeros((512,512,3),np.uint8)
#img[100:300,200:300] =19,36,56
cv2.line(img,(0,0),(img.shape[1],img.shape[0]),(255,0,255),10)#画一条直线，分别定义（画板，起点，终点，颜色，宽度）
cv2.rectangle(img,(100,100),(200,300),(0,255,156),6)#画一个矩形cv2.FILLED填充矩形直到没有空间
cv2.rectangle(img,(100,100),(200,300),(0,255,156),cv2.FILLED)
cv2.circle(img,(450,60),60,(255,255,0),6)
cv2.putText(img," TANY ",(300,100),cv2.FONT_HERSHEY_SCRIPT_SIMPLEX,2,(255,125,200),3)
print(img)
cv2.imshow("Img",img)

cv2.waitKey(0)