import requests
from bs4 import BeautifulSoup
import xml
import re


re_page=re.compile(r'.*? href="(.*?)"><.*?')
page_url=[]
r=requests.get("https://www.tupianzj.com/meinv/")
r.encoding=r.apparent_encoding

html=r.text
soup=BeautifulSoup(html ,"html.parser")
for item in soup.find_all("h3",class_="list_title"):
    print(item)
    url = re.findall(re_page,str(item))
    print(url)
    page_url.append(url)
print(page_url)







