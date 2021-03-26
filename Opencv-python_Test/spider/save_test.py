# -*- codeing = utf-8 -*-
# @Time:2021/2/20 17:24
# @Author:谭洋
# @File:opencv-io-test.py

import requests
from bs4 import BeautifulSoup
import xml
import re



picture=requests.get("https://img.tupianzj.com/uploads/allimg/202101/9999/ae38397685.jpg")
# picture.encoding=picture.apparent_encoding
with open(r"picture/name.jpg", "wb") as f:

    f.write(picture.content)
def save_picture(url):
    name=url[-14:]     #文件保存名字

    picture=requests.get(url)
    with open(r"picture/"+name,"wb") as f:
        f.write(picture.content)


