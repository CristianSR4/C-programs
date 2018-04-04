/* Pide al usuario dos numeros, si el segundo numero es 0, da error, si no hace la division */

#include <stdio.h>
#include <stdlib.h>

int main(){

  int primerNumero;
  int segundoNumero;
  int division;

  printf("Teclee un número: ");
  scanf("%i", &primerNumero);

  printf("Teclee otro número: ");
  scanf("%i", &segundoNumero);

  if (segundoNumero != 0) {
      division = primerNumero / segundoNumero;
      printf("El resultado de la division es %i \n", division);
  }
  else 
      printf("Error: No se puede dividir entre cero.\n");

  return EXIT_SUCCESS;
}
