/*** ### Autor: Mtro. Christian Mauricio Castillo Estrada  ### */
/*** ### Facultad de Negocios Campus IV de la UNACH  ### */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	int opc, moneda, acum =0;
	float precio_total = 0.0, cambio=0.0;
	char nombre_prod[20];
	
	/******  MENU DE PRODUCTOS ******/
	printf("10.- Refresco Coca-Cola - $ 15.00\n");
	printf("22.- Refresco Pepsi - $ 16.00\n");
	printf("35.- Agua Bonafont - $ 18.00\n");
	printf("41.- Jugo Jumex Uva - $ 11.00\n");
	
	printf("Opcion: ");
	scanf("%d",&opc);	
		
	switch(opc){
		case 10: precio_total = 15.00; strcpy(nombre_prod,"Refresco Coca-Cola"); break;
		case 22: precio_total = 16.00; strcpy(nombre_prod,"Refresco Pepsi"); break;
		case 35: precio_total = 18.00; strcpy(nombre_prod,"Agua Bonafont"); break;
		case 41: precio_total = 11.00; strcpy(nombre_prod,"Jugo Jumex Uva"); break;
		default: printf("La opcion seleccionada no existe"); break;
	}
	
	
	/******  LECTURA DE LAS MONEDAS  ******/
	
	while(acum<precio_total){
		printf("\n Ingresa una moneda: ");
		scanf("%d",&moneda);
		acum = acum + moneda;
	}
	
	
	/******  VALIDAR EL CAMBIO DEL TOTAL DE LA COMPRA ******/
	
	if( acum > precio_total ){
		cambio = acum - precio_total;
		printf("\n\n El cambio entregado es: $ %0.2f", cambio);
	}
	
	/******  ENTREGA DEL PRODUCTO ******/
	printf("\n\n Entregando el producto ...  %s",nombre_prod);
	
	return 0;
}



/******* ### CODIGO 2 SINTAXIS DE LAS ESTRUCTURAS REPETITIVAS  ### ******************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int x=0;
	
	/*** estructura repetitiva while ******/
	
		while(x<=10){
			printf("%d \n",x); //acción
			x=x+2;
		}	
	
	printf("\n\n");
	/*** estructura repetitiva for ******/
	
		for(x=0; x<=50; x+=2){
			
			printf("%d \n",x);
			if(x==20){
				//break; //rompe el ciclo
				//return 0; //finaliza ciclo y el programa
			}
			
		}
	
	printf("\n\n");
	/*** estructura repetitiva do-while ******/
	
	x=0;
	do{
		printf("%d \n",x);//acción
		x=x+2;	
	}while(x<=10);
	
	
	return 0;
}
