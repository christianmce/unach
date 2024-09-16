import requests
from bs4 import BeautifulSoup

r = requests.get('http://www.unach.mx')
reshtml = BeautifulSoup(r.text, 'lxml')

noticias = reshtml.find(class_='mas-titulares')
#print(noticias)

lista = noticias.find_all('a')

for nota in lista:    
    links = nota.get('href')
    print(links)

# ----------------------------------------------
import csv
with open('datos.csv', 'w') as file:
    writer = csv.writer(file)
    writer.write(links)
