#-*- codeing = utf-8 -*-
import requests
import re
import bs4
from bs4 import BeautifulSoup
import xlwt


savepath = "爬取文件.xls"  # 保存路径
datelist = []  # 文件
def main():


    burl = "http://www.suduzy6.com:777/index-{}.html"
    # 获取数据并且进行解析
    datelist=getdate(burl)
    #以excel保存数据
    saveData(datelist,savepath)




def getdate(burl):
    # 正则表达式规则
    rlink = re.compile(r'<a href="(.*?)" target="_blank">')
    rname = re.compile(r'<a href="(.*?)" target="_blank">(.*?)</a>')
    rclas = re.compile(r'<span class="wb2">(.*?)</span>')
    rtime = re.compile(r'<span class="wb3">(.*?)</span>')

    for i in range(40):#爬虫爬取的网页数
        url = burl.format(i)
        res = requests.get(url)

        soup = BeautifulSoup(res.text, "html.parser")
        for item in soup.find_all('div', class_='td'):
            print(item)  # 测试爬取内容
            item = str(item)

            date = []
            link = "http://www.suduzy6.com:777/" + re.findall(rlink, item)[0]
            # print(link)#测试爬取网站
            # print(item)#测试数据处理之后item 会不会改变
            date.append(link)

            name = re.findall(rname, item)[0][1]
            date.append(name)

            clas = re.findall(rclas, item)[0]
            date.append(clas)

            time = re.findall(rtime, item)[0]
            date.append(time)

            print(date)
            datelist.append(date)
    return datelist


def saveData(datalist,savepath):
    print("save....")
    book = xlwt.Workbook(encoding="utf-8",style_compression=0)  #创建workbook对象
    sheet = book.add_sheet('爬取数据',cell_overwrite_ok=True)    #创建工作表
    col = ("电影链接","影片名","影片类型","时间")
    for i in range(0,len(col)):
        sheet.write(0,i,col[i]) #列名
    for i in range(0,len(datalist)):
        print("第%d条" %(i+1))
        data = datalist[i]
        for j in range(0,len(col)):
            sheet.write(i+1,j,data[j])      #数据

    book.save(savepath)       #保存


if __name__=="__main__":
    main()
    print("爬取成功")