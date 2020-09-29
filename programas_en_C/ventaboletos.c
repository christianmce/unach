#include <stdio.h>
#include <stdlib.h>

//Autor: Mtro. Christian Mauricio Castillo Estrada (2020)
//Clase 29/09/2020 Simular venta de boletos de un autobus, control de asientos. 


int main(int argc, char *argv[]) {
	char nombre[20];
	int asientos[6] = {0,1,0,0,1,1};
	int na; //posición del asiento
	int x = 0;
	int compra =0;
	
	printf("***Bienvenido *** \n");
	
	while(x<6){
		printf("[ %d ] - ",asientos[x]);		
		x = x + 1;
	}
	
	while(compra==0){
	
	printf("\n\nIngresa el No. de asiento que deseas comprar: ");
	scanf("%d",&na);
	
	if(na>=1 && na<=6)
	{
		
		if(asientos[na-1] == 0){  //Cuando esta libre		
			printf("El asiento esta libre, Ingresa el nombre del pasajero: ");
			scanf("%s",&nombre);
			asientos[na-1] = 1; //cambiar el estatus de 0 a 1 de libre a reservado
			compra = 1;
		}
		else{
			printf("No es posible realizar la compra, el Asiento esta reservado.");
		}
	}
	else{
		printf("El numero de asiento es incorrecto, solo tenemos disponibles 6 asientos");
	}
	
    }
    
	x=0;
	while(x<6){
		printf("[ %d ] - ",asientos[x]);
		x = x + 1;
	}
	
	return 0;
}
