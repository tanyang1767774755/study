# -*- codeing = utf-8 -*-
# @Time:2021/2/20 17:24
# @Author:谭洋
# @File:opencv-io-test.py
import requests
import re
from bs4 import BeautifulSoup
import io
burl="http://pic.netbian.com/4kmeinv/index_{}.html"
headers={'User-Agent':
             'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/87.0.4280.141 Safari/537.36 Edg/87.0.664.75'
         }
rurl=re.compile(r'.*?src="(.*?)".*?')
rname=re.compile(r'.*?<b>(.*?)</b>.*?')
PN=[]
PI=[]
savepath=r"C:\Users\LENOVO\Desktop\Picture"
for i in range(2):
    url=burl.format(i+3)
    print(url)
    r=requests.get(url=url,headers=headers)
    print(r.status_code)
    r.encoding=r.apparent_encoding
    html=r.text
    print(html)
    soup=BeautifulSoup(html,"html.parser")
    print(soup)
    print(type(soup))
    item=soup.find_all('a', target="_blank")
    print('_'*60)
    print(item)
    for date in item:
        date = str(date)
        purl=re.findall(rurl,date)
        name=re.findall(rname,date)
        #print('爬取页面中。。。。。'*100,end="\n")
        print(name)
        print(purl)#     测试数据
        PN.append(str(name))
        PI.append(str(purl))
print(PN)
print(PI)
i=0
for u in PI:
    with open(r"C:\Users\LENOVO\Desktop\Picture\\" + PN[i] + ".jpg", "wb") as tp:
        picture = requests.get(url="http://pic.netbian.com/" + u, headers=headers).content
        tp.write(picture)
        print((PN[i] + str(i)), "保存成功!!!!!")
i += 1

print(type(PN))
print(PN)
print(PI)
