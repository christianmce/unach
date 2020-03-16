#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
  char productos[3][25];
	float precio[3];
	int cantidad[3];
	
	int x=0;
	
	while(x<3){
		printf("Compra No. %d \n",x+1);
		
		printf("Ingresa el nombre del producto: ");
		scanf("%s",&productos[x]);
		
		printf("Ingresa el precio del producto: ");
		scanf("%f",&precio[x]);
		
		printf("Ingresa la cantidad del producto: ");
		scanf("%d",&cantidad[x]);
		
		system("CLS"); //limpiar pantalla
		x = x + 1;
	}
	
	//-------------------------------- GENERAR TICKET DE VENTA -----------------------------
	
	x=0;
	float parcial, acum=0;
	printf(" Imprimiendo TICKET ..... \n\n");
	
	while(x<3){
		
		parcial = precio[x] * cantidad[x];  //precio parcial
		acum = acum + parcial; //acumulador para el subtotal
		printf(" %d    %s    %0.2f    %d    $ %0.2f  \n", x+1,productos[x],precio[x],cantidad[x],parcial);
		x = x + 1;
	}
	
	//-------------------------------- CALCULAR TOTAL A PAGAR -----------------------------
	
	float iva,total;
		iva = acum * 0.16;   
		total = acum + iva;
		
		printf(" \n\n ----  Subtotal:  $ %0.2f \n", acum);
		printf(" ----  IVA:  $ %0.2f \n", iva);
		printf(" ----  TOTAL:  $ %0.2f", total);
		
	
	return 0;
}
