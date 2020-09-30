
// Autor: Mtro. Christian Mauricio Castillo Estrada
// Facultad de Negocios, Universidad Autónoma de Chiapas


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float calificaciones[5];
	float prom,acum;
	int x = 0;
	
	while(x<5)
	{
		printf("Ingresa una calificacion:");
		scanf("%f",&calificaciones[x]);
		x=x+1;
	}
	
	printf("\n\n");
	
	//Imprimir las calificaciones ingresadas y calcular promedio final
	x=0;
	while(x<5)
	{
		printf("Cal. %d  -  %0.2f  \n",x+1, calificaciones[x]);
		acum = acum + calificaciones[x];
		x=x+1;
	}
	
	prom = acum / 5;
	printf("\nEl promedio final es: %0.2f",prom);
	
	
	return 0;
}
