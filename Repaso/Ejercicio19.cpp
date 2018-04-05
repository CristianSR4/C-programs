/* Pide dos numeros al usuario y te dice si los dos son positivos, si es uno, o los dos son negativos. */

#include <stdio.h>
#include <stdlib.h>

int main(){

int numeroUno;
int numeroDos;

  printf("Seleccione un numero: ");
  scanf("%i", &numeroUno);
  
  printf("Seleccione otro numero: ");
  scanf("%i", &numeroDos);

  if ((numeroUno>=0) && (numeroDos>=0))
      printf("Los dos numeros son positivos.\n");
  else
    if ((numeroUno>=0) || (numeroDos>=0))
	printf("Uno de los dos números es positivo.\n");
  else
    if ((numeroUno<0) && (numeroDos<0))
	printf("Ninguno de los numeros es positivo.\n");
  

  return EXIT_SUCCESS;
}
