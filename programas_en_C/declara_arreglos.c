#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//Declarar un arreglo unidimensional de 7 celdas 
	float precio[7];
	
	//Declarar un arreglo bidimensional de 4 columnas y 3 filas
	int edades[4][3]; 
	
	//Declarar e inicializar un arreglo de tipo entero
	int grupos[5] = {4,5,6,7,9};
	
	//Declarar e inicializar un arreglo de tipo real - double
	double precios[3] = {145.74, 789.56, 177.22};
	
	//Declarar e inicializar un arreglo bidimensional de 4x2
	float grados[2][4] = {{21.5,22.6,23.5,19.2},{17.9,20.2,25.4,26.3}};
	
	
	//Imprimir los valores de un arreglo bidimensional utilizando un índice
	int i;
	
	while (i < 4){
		printf("%0.2f  -  %0.2f  \n", grados[0][i],grados[1][i]);
		i=i+1;
	}
	
}
