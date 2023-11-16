# (2023) Dr. Christian Mauricio Castillo Estrada
# Modelo de regresión lineal simple para la UC: BigData (LIDTS)

from sklearn.metrics import mean_squared_error,r2_score
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

df = pd.read_csv("estudiantes.csv")
#verificar valores nulos
print(df.isnull().sum())

#analizar la correlación que existe entre variables
print(df.corr()['horas_estudio'])

#asignar valores a las variables dependiente e independiente
X=df['horas_estudio'].values
X= X.reshape(-1,1)
y=df['pts'].values

#graficar la relación entre variables del conjunto de datos
plt.scatter(X,y,color="red")

#dividir el conjunto de datos
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X,y,test_size=0.3, random_state=0)

from sklearn.linear_model import LinearRegression
regression = LinearRegression()
regression.fit(X_train, y_train)

y_pred = regression.predict(X_test)

# --------------------------------------------------------------
plt.scatter(X_train,y_train,color="red")
plt.plot(X_train,regression.predict(X_train),color="blue")

plt.title ('Horas de estudio vs. Calificación del Examen')
plt.xlabel ('Horas de estudio')
plt.ylabel ('Puntuación')
plt.show()

# --------------------------------------------------------------
plt.scatter(X_test,y_test,color="red")
plt.plot(X_train,regression.predict(X_train),color="blue")

plt.title ('Horas de estudio vs. Calificación del Examen')
plt.xlabel ('Horas de estudio')
plt.ylabel ('Puntuación')
plt.show()

#Calcular el Error Cuadrático Medio (MSE = Mean Squared Error)
mse = mean_squared_error(y_true = y_test, y_pred = y_pred)
#La raíz cuadrada del MSE es el RMSE
rmse = np.sqrt(mse)
print('Error Cuadrático Medio (MSE) = ' + str(mse))
print('Raíz del Error Cuadrático Medio (RMSE) = ' + str(rmse))
print(f"R2_Score: {r2_score(y_test,y_pred)}")


