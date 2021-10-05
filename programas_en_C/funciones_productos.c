#include <stdio.h>
#include <stdlib.h>
void menorprecio(int paramclv[]);
void mayoresprecio(int paramclv[]);
void reporte(int paramclv[]);

float precios[5]; // arreglo global
char productos[5][30]; // arreglo global

int main(int argc, char *argv[]) {   
	
	int claves[5]; // arreglo local
	int x=0;
	
	while(x<2){
		printf("Ingresa la clave del producto: ");
		scanf("%d",&claves[x]);
		
		printf("Ingresa el precio del producto: ");
		scanf("%f",&precios[x]);
		
		printf("Ingresa el nombre del producto: ");
		scanf("%s",&productos[x]);
		
		x=x+1;	
	}
	
	system("CLS"); //limpiar pantalla
	
	//reporte();
	
	printf("\n\n  ------------------- Productos menores a 200 -------------------- \n\n");
	
	menorprecio(claves);
	
	return 0;
}


void reporte(int paramclv[]){ //contenedor1
	
	int pos=0;
	while(pos<5){
		printf("\n %d  |   %.2f   |   %s  \n", paramclv[pos],precios[pos], productos[pos]);
		pos = pos + 1;
	}
	
}

void menorprecio(int paramclv[]){  //imprima aquellos productos con un precio menos a 200 pesos
	
	int pos=0;
	while(pos<2){
		
		if(precios[pos]<200){
			printf("\n %d  |   %.2f   |   %s  \n",paramclv[pos], precios[pos], productos[pos]);
		}			
		
		pos = pos + 1;
	}
	
}

void mayoresprecio(int paramclv[]){  //imprima aquellos productos con un precio mayor o igual a 200 pesos
	
	int pos=0;
	while(pos<5){
		
		if(precios[pos]>=200){
			printf("\n %d  |   %.2f   |   %s  \n", paramclv[pos],precios[pos], productos[pos]);
		}			
		
		pos = pos + 1;
	}
	
}
