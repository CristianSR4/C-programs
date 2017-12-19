
#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int bit1;
  int bit2;

  printf("Bit 1: ");
  scanf(" %i", &bit1);

  printf("Bit 2: ");
  scanf(" %i", &bit2);

  if (bit1 == 0 && bit2 == 0)
      printf("El número es 0.\n");
  else if (bit1 == 1 && bit2 == 0)
      printf("El número es 1.\n");
  else if (bit1 == 0 && bit2 == 1)
      printf("El número es 2.\n");
    else if (bit1 == 1 && bit2 == 1)
        printf("El número es 3.\n");
   else
      printf("Solo 0 y 1 Puta mierda\n"); 
  return EXIT_SUCCESS;
}
