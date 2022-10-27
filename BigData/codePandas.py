import os
import pandas as pd

ventas = pd.read_csv("ventas_abril2019.csv")
ventas.head()


#Encontrar valores nulos, limpiar los datos
nan_df = ventas[ventas.isna().any(axis=1)]
display(nan_df.head())

ventas = ventas.dropna(how='all')
ventas.head()
