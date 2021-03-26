#-*- codeing = utf-8 -*-
#@Time:2021/2/20 17:24
#@Author:谭洋 202031001951
#@File:opencv-io-test.py

import requests
from bs4 import BeautifulSoup
import re



burl="https://www.tupianzj.com/meinv"


def main():
    urls=get_picurl(burl)  #获取图片链接,list
    print("正在获取图片类型链接"*20)
    links=get_group_pictureLink(urls)
    print("正在获取图片组链接"*20)
    pic_links=picture_links(links)
    print("下载中"*50)
    for url in pic_links:
        save_picture(url)  #下载并保存图片
    print("###"*50+"下载完成")




def save_picture(url):
    name = url[-14:]  # 文件保存名字
    picture = requests.get(url)
    with open(r"picture/" + name, "wb") as f:
        f.write(picture.content)



def get_picurl(burl):               #return kind of pictures links
    re_page = re.compile(r'.*? href="(.*?)"><.*?')
    urls=[]                                         #类型链接
    print("*" * 50)
    print("请求根目录中")
    print(burl)

    r=requests.get(burl)
    r.encoding=r.apparent_encoding
    soup=BeautifulSoup(r.text,"html.parser")
    for item in soup.find_all("h3", class_="list_title"):
        # print(item)
        url = re.findall(re_page, str(item))
        # print(url)
        urls=urls+url
    print(urls)
    return urls



def get_group_pictureLink(urls):            #return a group of pictures links
    for url in urls:
        re_link = re.compile(r'<li> <a href="(.*?)" title.*?')
        links=[]
        print("*" * 50)
        print("请求类型目录中")
        print(url)
        r=requests.get(url)
        r.encoding=r.apparent_encoding
        soup=BeautifulSoup(r.text,"html.parser")
        for item in soup.find_all("ul",class_="list_con_box_ul"):
            #print(item)
            link=re.findall(re_link,str(item))
            links=links+link

        print(links)
    return links



def picture_links(links):    #return the first picture of the group
    pic_links=[]
    pic_linkss=[]
    compl = re.compile(r'.*? src="(.*?)".*?')
    for link in links:
        print("*" * 50)
        print("请求图片组目录中")
        print("https://www.tupianzj.com/"+link)
        r=requests.get("https://www.tupianzj.com/"+link)
        r.encoding = r.apparent_encoding
        #print(r.text)
        soup = BeautifulSoup(r.text, "html.parser")


        for item in soup.find_all("ul",class_="d1 ico3"):
            picture_url = re.findall(compl, str(item))
            print(picture_url)
            pic_links = pic_links+picture_url
        # print(pic_links)


        for item in soup.find_all("div", id="bigpic_all"):
            #print(item)
            picture_url = re.findall(compl, str(item))
            print(picture_url)
            pic_links=picture_links+picture_url
        print(pic_links)
        pic_linkss=pic_linkss+pic_links
        print(pic_linkss)
    return pic_linkss


if __name__ == "__main__":
    main()