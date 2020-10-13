#include <stdio.h>
#include <stdlib.h>

//**********************************************************
//Autor: Mtro. Christian Mauricio Castillo Estrada
//Universidad Autónoma de Chiapas, Facultad de Negocios CIV
//**********************************************************

int main(int argc, char *argv[]) {

	char productos[6][10];
	//[6] número de filas de la tabla de cadena de caracteres
	//[10] número de columnas o celdas para la tabla de cadena
		
	printf("\nIngresa el nombre de un producto 1: ");
	scanf("%s", &productos[0]);
	
	printf("Ingresa el nombre de un producto 2: ");
	scanf("%s", &productos[1]);
	
	
	printf("El productos ingresado son %s  y  %s  \n\n", productos[0],productos[1]);
	
	int x=0;
	while(x<10){
		printf("%c", productos[1][x]);
		x = x + 1;
	}
	
	x=9;
	while(x>=0){
		printf("%c", productos[1][x]);
		x = x - 1;
	}
  
  return 0;
}
