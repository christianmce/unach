#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
  	int opc, precio, a=0, moneda=0;
	
	printf("** MAQUINA VENDEDORA ** \n");
	printf("1.- Sabritas ($12.00 )  \n");
	printf("2.- Refresco CocaCola ($17.00 )  \n");
	printf("3.- Chocolate M&M ($21.00 )  \n");
	printf("4.- Bolsa Dulces ($14.00 )  \n\n");
	
	printf("Selecciona una opcion:  ");
	scanf("%d",&opc);
	
	switch(opc)
	{
		case 1: precio = 12; break;
		case 2: precio = 17; break;
		case 3: precio = 21; break;
		case 4: precio = 14; break;
		default: printf("La opcion elegida no existe "); break;
	}
	
	while( a < precio)
	{
		printf("\n Ingresa una moneda: ");
		scanf("%d",&moneda);
		a = a + moneda;		
	}
	
	printf("El precio de tu producto fue $ %d pesos ...despachando ... \n", precio);
	printf("Tu cambio es: $ %d pesos", (a-precio));
	
	return 0;
}
