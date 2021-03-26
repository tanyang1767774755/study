# -*- codeing = utf-8 -*-
# -*- coding: utf-8 -*-
# @Time    : 2021/3/25 22:48
# @Author  : 谭洋 202031001951
# @Email   : 1767774755@qq.com
# @File    : get_shapes.py
# @Software: PyCharm

import cv2

img=cv2.imread("img.jpeg")
gry_img = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
img_Blur = cv2.GaussianBlur(gry_img,(5,5),2)
img_canny = cv2.Canny(img_Blur,20,20)
img_Contours=img.copy()
def getcontours(img):
    pass
    contours,hierarchy=cv2.findContours(img,cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_NONE)#contours表示找到的轮廓对象

    for cnt in contours:
        area = cv2.contourArea(cnt)
        print(area)
        if area>300:        #除噪  过滤掉小于面积300的检测图形
            cv2.drawContours(img_Contours,cnt,-1,(255,0,0),2)
            peri=cv2.arcLength(cnt,True)#True 表示闭合
            approx = cv2.approxPolyDP(cnt,0.02*peri,True)  #图形逼近算法检测拐点数字越小精度越高
            print(len(approx))
            objCor = len(approx)

            x, y, w, h =cv2.boundingRect(approx) #approx 是一张图片（二值图） 返回他的左上角坐标，和宽高
            cv2.rectangle( img_Contours , (x , y) , (x + w , y + h) , (0 , 0 , 255) , 2 )#用最小的矩形框选出图像
            if objCor ==3:objectType="tri"
            elif objCor == 4:
                aspRatio = w/float(h)
                if aspRatio<1.2 and aspRatio > 0.8:objectType="Square"
                else:objectType="Rectangle"
            elif objCor>4:objectType="Circle"
            else:objectType="None"
            cv2.putText(img_Contours,objectType,(x+(w//2)-20,y+(h//2)-5),
                        cv2.FONT_ITALIC,0.5,(0,0,0),1)

getcontours(img_canny)

cv2.imshow("img_canny",img_canny)
cv2.imshow("input",img)
cv2.imshow("gray",gry_img)
cv2.imshow("img_Blur",img_Blur)
cv2.imshow("img_Contours",img_Contours)
cv2.waitKey(0)




