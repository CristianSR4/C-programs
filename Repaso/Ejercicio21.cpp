/* Pide dos numeros al usuario y dice cual es mayor o si son iguales */

#include <stdio.h>
#include <stdlib.h>

int main(){

int numeroUno;
int numeroDos;

  printf("Escribe un mumero: ");
  scanf("%i", &numeroUno);

  printf("Escribe otro numero: ");
  scanf("%i", &numeroDos);

  if (numeroUno>numeroDos)
     printf("El primer numero es mayor.\n");
  else 
    if (numeroUno<numeroDos)
     printf("El segundo numero es mayor.\n");
  else printf("Los numeros son iguales.\n");

  return EXIT_SUCCESS;
}
