# -*- codeing = utf-8 -*-
# @Time:2021/2/20 17:24
# @Author:谭洋
# @File:opencv.py
import requests
from bs4 import BeautifulSoup
import xml
import re



pic_url=['/meinv/20210125/224327.html', '/meinv/20210219/224968.html', '/meinv/20210223/225219.html', '/meinv/20210219/224902.html', '/meinv/20210319/226400.html', '/meinv/20210319/226413.html', '/meinv/20210223/225212.html', '/meinv/20210223/225216.html', '/meinv/20210307/225895.html', '/meinv/20210307/225897.html', '/meinv/20210306/225826.html', '/meinv/20210307/225896.html', '/meinv/20210307/225888.html', '/meinv/20210307/225893.html', '/meinv/20210306/225819.html', '/meinv/20210307/225899.html', '/meinv/20210306/225809.html', '/meinv/20210306/225818.html', '/meinv/20210306/225802.html', '/meinv/20210306/225827.html']
pictu_url=[]
PIC=[]
compl=re.compile(r'.*? src="(.*?)"/>.*?')
for i in pic_url:
    list_url="https://www.tupianzj.com/"+i
    r=requests.get(list_url)
    r.encoding=r.apparent_encoding

    soup=BeautifulSoup(r.text,"html.parser")
    for item in soup.find_all("div",id="bigpic_all"):
        pass
        print("*"*100)
        print(item)
        picture_url=re.findall(compl,str(item))
        PIC.append(picture_url)
    print(PIC)