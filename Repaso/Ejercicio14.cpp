/* programa en el cual el usuario mete dos numeros y le dice cual es mayor */

#include <stdio.h>
#include <stdlib.h>

int main(){

  int primerNumero;
  int segundoNumero;
  int mayor;

  printf("Elige el primer numero: ");
  scanf("%i", &primerNumero);

  printf("Elige el segundo numero: ");
  scanf("%i", &segundoNumero);

  if (primerNumero > segundoNumero)
      mayor = primerNumero;
  else mayor = segundoNumero;

  printf("El numero mayor es el %i", mayor);
  printf("\n");

  return EXIT_SUCCESS;
}
