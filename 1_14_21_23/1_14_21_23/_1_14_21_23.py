import requests
import re
from bs4 import BeautifulSoup

vedio=[]

rlink=re.compile(r'<a href="(.*?)">')#网站链接
rname=re.compile(r'<a href="/vod-15179.html" target="_blank">(.*?)</a>')
rclas=re.compile(r'<span class="wb2">(.*?)</span>')
rdat =re.compile(r'<span class="wb3">(.*?)</span>')

def main():
    burl="http://www.suduzy6.com:777/index-{}.html"
    vedio=getres(burl)
    print(vedio)
    


def getres(burl):    
    for i in range(10):
        url=burl.format(i)
        html=requests.get(url)#获取
        soup=BeautifulSoup(html,"html.parser")
        for item in soup.find_all("div",class_="td"):#保存电影信息
            date=[]
            item=str(item)
            link=re.findall(rlink,item)[0]
            date.append(link)

            name=re.findall(rname,item)[0]
            date.append(name)

            clas=re.findall(rclas,item)[0]
            date.append(clas)

            dat=re.findall(rdat,item)[0]
            date.append(dat)
            vedio.append(date)                               
    return vedio                                #返回



if __name__=="__main__":

    main()
    print(vedio)
    print("爬取完毕")
    