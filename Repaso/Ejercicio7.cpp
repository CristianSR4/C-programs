/* división y el resto de la división entre x e y, valores que meterá el usuario*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int x;
  int y;
  int division;
  int resto;

  printf("Escribe el primer número: ");
  scanf("%i", &x);
  printf("Escribe el segundo numero: ");
  scanf("%i", &y);

  division = x/y;
  resto = x%y;
	
  printf("El resultado de la division es %i", division);
  printf("\n");
  printf("El resto es %i", resto);
  printf("\n");

  return EXIT_SUCCESS;
}
