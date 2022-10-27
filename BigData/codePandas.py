# Universidad Autónoma de Chiapas
# Dr. Christian Mauricio Castillo Estrada <cmce@unach.mx>

import pandas as pd

ventas = pd.read_csv("Ventas_Abril:2019.csv")
ventas.head()


#Encontrar valores nulos, limpiar los datos
nan_df = ventas[ventas.isna().any(axis=1)]
display(nan_df.head())

#Imprimir Dataframe limpio
ventas = ventas.dropna(how='all')
ventas.head()

#Agregar la columna Mes derivado de la fecha de la orden de compra
ventas['Month'] = ventas['Order Date'].str[0:2]
ventas['Month'] = ventas['Month'].astype('int32')
ventas.head()

#Agregar la columna Ciudad derivado de la Dirección de la compra
ventas['Ciudad'] = ventas['Purchase Address'].str.split(",").str[1]
#print(ventas.head())

ventas['Price Each'] = pd.to_numeric(ventas['Price Each'],errors='coerce')
ventas = ventas.loc[ventas['Price Each'] < 12.00]
