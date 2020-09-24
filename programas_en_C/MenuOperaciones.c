#include <stdio.h>
#include <stdlib.h>

//Autor: Mtro. Christian Mauricio Castillo Estrada
//< cmce@unach.mx >

int main(int argc, char *argv[]) {
	
	int opc,n1,n2;
	float res;
	
	printf(" *****  MENU PRINCIPAL ****\n");
	printf("1. Suma \n");
	printf("2. Resta \n");
	printf("3. Multiplica \n");
	printf("4. Divide \n");
	
	printf("Selecciona una opcion: ");
	scanf("%d",&opc);
	
	printf("Ingresa el valor de Num1: ");
	scanf("%d",&n1);
	printf("Ingresa el valor de Num2: ");
	scanf("%d",&n2);
	
	switch(opc)
	{
		case 1: res = n1 + n2;  break;
		case 2: res = n1 - n2;  break;
		case 3: res = n1 * n2;  break;
		case 4: res = n1 / n2;  break;
		default: printf("No existe la opcion seleccionada"); break;
	}
	
	printf("\n El resultado es %.1f", res);
	
	return 0;
}
