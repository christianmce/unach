#include <stdio.h>
#include <stdlib.h>
void reporte1();
void reporte2();

float ventas[4][13];	//4 columnas y 13 filas arreglo de tipo Global

int main(int argc, char *argv[]) {
	
  int mes, suc;
		
	
	printf(" -- INTERFAZ DE CAPTURA DE VENTAS -- \n\n");
	
	printf("Ingresa la sucursal que deseas capturar sus ventas: ");
	scanf("%d",&suc);
	
	//Procedimiento para la captura de los datos de entrada
	suc = suc - 1;  //le resto 1 al dato ingresado
	mes=0;
	while(mes <= 11){
		printf("Ingresa las ventas totales del mes %d ", (mes+1));
		scanf("%f",&ventas[suc][mes]);
		mes = mes + 1;	
	}
	
	//mandar a llamar o ejecutar el reporte1
	reporte1(suc);
	
	printf("Ingresa el numero de mes para generar el reporte de ventas: ");
	scanf("%d",&mes);
	mes = mes - 1;
	
	reporte2(mes);
	
	return 0;
}

void reporte1(int s){
	int mes;
	float acumventas = 0.0;
	
	
	//Procedimiento para generar el valor acumulado de ventas por primer trimestre del año (Ene-Marzo)
	mes=0;
	while(mes <= 11){
		acumventas = acumventas + ventas[s][mes];
		mes = mes + 1;
	}
	
	ventas[s][12] = acumventas;  
	
	printf("\n\n Las ventas totales de la sucursal %d son:  $  %.2f",(s+1),ventas[s][12]);
	
}

void reporte2(int m){
	int isuc;
	float acumventas = 0.0;
	
	
	//Procedimiento para generar el valor acumulado de ventas por MES
	isuc=0;
	while(isuc <= 2){
		acumventas = acumventas + ventas[isuc][m];
		isuc = isuc + 1;
	}
	
	ventas[3][m] = acumventas;  
	
	printf("\n\n Las ventas totales del mes %d  son: $  %.2f",(m+1),acumventas);
	
}

