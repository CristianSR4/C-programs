/* programa que me incrementa 3 numeros */

#include <stdio.h>
#include <stdlib.h>

int main(){

int x;
int y;
int z;

 x= 15;
 y= -10;
 z= 2147483647;

 x++;
 y++;
 z++;

 printf("El 15 incrementado es: %i", x);
 printf("\n");
 printf("El -10 incrementado es: %i", y);
 printf("\n");
 printf("El 2147483647 incrementado es: %i", z);
 printf("\n");
  return EXIT_SUCCESS;
}
