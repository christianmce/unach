#include <stdio.h>
#include <stdlib.h>

//Declarar función o método
float calculaTotal(float p, int c);
void imprimePares();


int main(int argc, char *argv[]) {
	
	float precioU,totalPagar; //Variable local
	int cantidad;
	
	printf("Ingresa el precio unitario del producto: ");
	scanf("%f",&precioU);
	
	printf("Ingresa la cantidad a comprar: ");
	scanf("%d",&cantidad);
	
	totalPagar = calculaTotal(precioU, cantidad);
		
	printf("El total a pagar con IVA incluido es:  $  %.2f  pesos MXN", totalPagar);	
	
	// No requiere variable no retorna nada
  imprimePares();      
		
	return 0;
}


float calculaTotal(float p, int c)
{
	float subtotal, Iva;	
	subtotal = p * c;
	Iva = subtotal * 0.16;
	return ( subtotal + Iva);	
}

void imprimePares()
{
	int x = 2;
	while (x <= 20){
		printf("\n %d  \n",x);
		x = x + 2;
	}	
	
}
