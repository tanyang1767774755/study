# -*- codeing = utf-8 -*-
# -*- coding: utf-8 -*-
# @Time    : 2021/3/26 18:24
# @Author  : 谭洋 202031001951
# @Email   : 1767774755@qq.com
# @File    : face_cade.py
# @Software: PyCharm
import cv2


faceCascade=cv2.CascadeClassifier("haarcascade_frontalface_default.xml")  #添加级联

img=cv2.imread("face.jpg")
imgGray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
faces=faceCascade.detectMultiScale(imgGray,1.1,4)
for x,y,w,h in faces:
    cv2.rectangle(img,(x,y),(x+w,y+h),(255,0,0),2) #添加检测框

cv2.imshow("img",img)
cv2.waitKey(0)



