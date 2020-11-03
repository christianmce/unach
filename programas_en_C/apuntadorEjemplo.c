#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int num;
	float precio;
	char letra;
	
	int *puntero1;
	float *puntero2;
	char *puntero3;
	
	num=7;
	precio = 315.6;
	letra = 'A';
	
	puntero1 = &num;      
	puntero2 = &precio;  
	puntero3 = &letra;
	
	*puntero1 = 10;
	*puntero2 = 577.6;
	
  printf("La direccion de memoria es: %x   =   %x ",puntero2, &precio);
  //printf("El valor de la variable letra es  %c", *puntero3);
  //printf("La direccion de la variable letra es  %x", puntero3);
  
	return 0;
}
