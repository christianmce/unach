#include <stdio.h>
#include <stdlib.h>
#define tam 10 

int main(int argc, char *argv[]) {
	
  int vNumeros[tam]; 
  int j, i, temp; 

  printf ("Introduce los %d números a ordenar:\n", tam); 
  
  /* Obtenemos los 10 números y los guardamos en vNumeros */
  for (i = 0; i < tam; i++) 
  { 
    printf ("%d: ", i + 1); 
    scanf ("%d", &vNumeros[i]); 
    printf ("\n"); 
  } 
  
  /* Ordenamos los números del vector vNumeros por el método de burbuja */
  for (i = 0; i < (tam - 1); i++) 
  { 
    for (j = i + 1; j < tam; j++) 
    { 
      if (vNumeros[j] < vNumeros[i]) 
      { 
        temp = vNumeros[j]; 
        vNumeros[j] = vNumeros[i]; 
        vNumeros[i] = temp; 
      } 
    } 
  } 
  
  /* Mostramos los números ordenados */
  printf ("Los números ordenados son:\n"); 
  for (i = 0; i < tam; i++) 
  { 
    printf("%d, ", vNumeros[i]); 
  } 
  printf("\n\n\n"); 
	
}
