/* programa en el que el usuario mete dos numeros y dice si el primero es multiplo del segundo */

#include <stdio.h>
#include <stdlib.h>

int main(){

  int a, b;

      printf("Elige un numero: ");
      scanf("%i", &a);

      printf("Elige otro numero: ");
      scanf("%i", &b);

      if (a % b == 0)
          printf("El primero es multiplo del segundo");
      else 
          printf("El primero no es multiplo del segundo");

      printf("\n");

  return EXIT_SUCCESS;
}
