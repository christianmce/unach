#include <stdio.h>
#include <stdlib.h>
#define tam 10 

int main(int argc, char *argv[]) {
	
  int A[tam]; 
  int j, i, tmp,k; 

  printf ("Introduce los %d números a ordenar:\n", tam); 
  
  /* Obtenemos los 10 números y los guardamos en A */
  for (i = 0; i < tam; i++) 
  { 
    printf ("%d: ", i + 1); 
    scanf ("%d", &A[i]); 
    printf ("\n"); 
  } 
  
  
  /* Ordenamos los números del vector A por el método de seleccion */
  for(i = 0; i < tam - 1; i++)
    {
        k = i; 
		for (j = i + 1; j < tam; j++){
		
            if (A[k] > A[j])
                k = j;
	    }
	    
        
        	tmp = A[k];
    		A[k] = A[i];
    		A[i] = tmp;
		            
    }
  
    
  /* Mostramos los números ordenados */
  printf ("Los numeros ordenados son:\n"); 
  for (i = 0; i < tam; i++) 
  { 
    printf("%d  ", A[i]); 
  } 
  printf("\n\n\n"); 
	
}
