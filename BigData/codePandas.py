import os
import pandas as pd

ventas = pd.read_csv("ventas_abril2019.csv")
ventas.head()


#Encontrar valores nulos, limpiar los datos
nan_df = ventas[ventas.isna().any(axis=1)]
display(nan_df.head())

ventas = ventas.dropna(how='all')
ventas.head()

#Agregar la columna Mes derivado de la fecha de la orden de compra
ventas['Month'] = ventas['Order Date'].str[0:2]
ventas['Month'] = ventas['Month'].astype('int32')
ventas.head()

#Agregar la columna Ciudad derivado de la Dirección de la compra
def get_city(address):
    return address.split(",")[1].strip(" ")

def get_state(address):
    return address.split(",")[2].split(" ")[1]

all_data['City'] = all_data['Purchase Address'].apply(lambda x: f"{get_city(x)}  ({get_state(x)})")
all_data.head()
