#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
  int asientos[] = {0,0,0,0,0};	
	int pos; 
	int res;  //1 SI  2 NO
	
	do{
		
		printf("Indica el asiento que deseas comprar: \n");
		scanf("%d",&pos);
		
		if( asientos[pos-1]==0 )
		{
			printf("Imprimiendo ticket de venta .... \n");
			asientos[pos-1]=1;
		}
		else
		{
			printf("Lo sentimos, no es posible vender el numero de asiento \n");
		}		
		
		printf("Deseas realizar otra compra? Si/No (1/2) \n");
		scanf("%d",&res);
		
	}while(res == 1);

	printf("Gracias por su compra !!");
	
	int x=0;
	while(x < 5){
		printf(" | %d |", asientos[x]);
		x=x+1;
	}
  
	return 0;
}
