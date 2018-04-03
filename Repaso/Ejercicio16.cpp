/* Pide número al usuario y si es 0 se acaba el programa si no te pide otro y los multiplica */

#include <stdio.h>
#include <stdlib.h>

int main(){

  int primerNumero;
  int segundoNumero;
  int distinto;
  int multiplicacion;

  printf("Teclee un número: ");
  scanf("%i", &primerNumero);

  if (primerNumero == 0)
      printf("El producto de 0 por cualquier número es 0.\n");
  else {
      printf("Teclee otro número: ");
      scanf("%i", &segundoNumero);
  }
  multiplicacion = primerNumero * segundoNumero;
  printf("El resultado de la multiplicacion es %i ", multiplicacion); 
  printf("\n");

  return EXIT_SUCCESS;
}
