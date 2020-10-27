#include <stdio.h>
#include <stdlib.h>

void menu();
void imprimeSucursal(float datos[2][3], int suc);
void mayoresVentaSuc(float datos[2][3]);
void mesMayoresVentas(float datos[2][3]);

int main(){

	float ventas[2][3]={{315.80, 980.00, 876.00}, {470.00, 897.00, 995.00}};
	int opc;
	
	menu();
	scanf("%d",&opc);
	
	switch(opc)
	{
		case 1: imprimeSucursal(ventas,0); break;
		case 2: imprimeSucursal(ventas,1);  break;
		case 3: mayoresVentaSuc(ventas); break;
		case 4: mesMayoresVentas(ventas); break;
		default: printf("La opcion ingresada no existe");
	}
	

return 0;

}



void menu()
{
	printf(" ** MENU PRINCIPAL ** \n\n");
	printf(" 1.- Imprimir ventas de la Sucursal 1 \n");
	printf(" 2.- Imprimir ventas de la Sucursal 2 \n");
	printf(" 3.- Sucursal con mayores ventas \n");
	printf(" 4.- Mes con mayores ventas \n");
	printf(" Selecciona una opcion: ");
}


void imprimeSucursal(float datos[2][3], int suc)
{
	int x = 0;
	float total_ventas = 0;
	
	system("CLS");
	printf("  **  Reporte de ventas de la Sucursal 1  ** \n\n");
	
	while(x<3){
		printf("$ %.2f \n", datos[suc][x]);
		total_ventas = total_ventas + datos[suc][x];
		x = x + 1;
	}
	
	printf("\n\nLas ventas totales de la Sucursal son: $ %.2f", total_ventas);
}


void mayoresVentaSuc(float datos[2][3])
{
	int x = 0;
	float totalsuc1 = 0, totalsuc2 = 0;
	
	system("CLS");
	printf("  **  Reporte de la Sucursal con mayores ventas  ** \n\n");
	
	while(x<3){
		totalsuc1 = totalsuc1 + datos[0][x];   //Sucursal 1 
		totalsuc2 = totalsuc2 + datos[1][x];   //Sucursal 2
		x = x + 1;
	}

	if(totalsuc1 > totalsuc2)
		printf(" La Sucursal 1 posee mayores ventas $ %.2f", totalsuc1);
	else
		printf(" La Sucursal 2 posee mayores ventas $ %.2f", totalsuc2);
}

void mesMayoresVentas(float datos[2][3])
{
	int x = 0;
	float totalmes1 = 0, totalmes2 = 0, totalmes3 = 0;
	
	system("CLS");
	printf("  **  Reporte del MES con mayores ventas  ** \n\n");
	
	while(x<2){
		totalmes1 = totalmes1 + datos[x][0];   //Mes 1
		totalmes2 = totalmes2 + datos[x][1];   //Mes 2
		totalmes3 = totalmes3 + datos[x][2];   //Mes 3
		x = x + 1;
	}
	
	if(totalmes1 > totalmes2 && totalmes1 > totalmes3)
	{
			printf(" La MES 1 Enero posee mayores ventas $ %.2f", totalmes1);
	}
	
	if(totalmes2 > totalmes1 && totalmes2 > totalmes3)
	{
			printf(" La MES 2 Febrero posee mayores ventas $ %.2f", totalmes2);
	}
	
	if(totalmes3 > totalmes1 && totalmes3 > totalmes2)
	{
			printf(" La MES 3 Marzo posee mayores ventas $ %.2f", totalmes3);
	}
}

