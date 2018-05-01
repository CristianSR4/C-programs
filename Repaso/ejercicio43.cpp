/* Mediante funciones me dice que numero es mayor.*/

#include <stdio.h>
#include <stdlib.h>

int calcular(int n) {
printf("%i", n);

}

int main(){
int x=10;
printf("El primer numero es: ");
calcular(x);
printf("\n");
printf("El segundo numero es: ");
calcular(5);
printf("\n");

if (x>5)
   printf("10 es mayor que 5.\n");

  return EXIT_SUCCESS;
}
