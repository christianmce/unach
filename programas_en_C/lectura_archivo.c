#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
int numero;
FILE *archivo = fopen("datos.txt", "r+");


//mientras archivo n o apunte a EOF, seguirá el ciclo
// EOF significa  End-Of-File
	
while(!feof(archivo)){

	fscanf(archivo,"%d",&numero);
  
	printf("numero leido desde archivo  %d", numero);
  
}


rewind(archivo);  //devuelve a la posición inicial del flujo


fclose(archivo);
	
	return 0;
}
