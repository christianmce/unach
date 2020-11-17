// *** Autor:  M.C.E. Christian Mauricio Castillo Estrada  
// *** Facultad de Negocios CIV Universidad Autónoma de Chiapas 
// *** Email:  <cmce@unach.mx> 

#include <stdio.h>
#include <stdlib.h>

struct autos{
	char noplacas[8];
	char marca[20];
	int modelo;
	float precio;
} inventario[50];

int main(int argc, char *argv[]) {
    
	int x=0;
	
	while(x<4){
	
		printf("No. placas:  ");  scanf("%s",&inventario[x].noplacas);
		printf("Marca:  ");  scanf("%s",&inventario[x].marca);
		printf("Modelo:  ");  scanf("%d",&inventario[x].modelo);
		printf("Precio:  ");  scanf("%f",&inventario[x].precio);
		x=x+1;
		system("CLS");  //limpiar pantalla
	}
	
	printf("\n  ****  REPORTE DE INVENTARIO DE AUTOS MODELO 2017  **** \n\n");
	
	x=0;
	
	while(x<4){
		
		if(inventario[x].modelo == 2017){
			printf(" %s     %s      %d      $ %.2f \n",inventario[x].noplacas,inventario[x].marca,inventario[x].modelo,inventario[x].precio);
		}
		x=x+1;
	}	

	return 0;
}
