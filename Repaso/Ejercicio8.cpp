/* programa que me muestra el resultado de la operacion (a+b)*(a-b) y de a^2-b^2, los valores los meterá el usuario */

#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int a;
  int b;
  int suma;
  int resta;
  int multiplicacion;
  int cuadrado;

  printf("Escribe el primer número: ");
  scanf("%i", &a);
  printf("Escribe el segundo numero: ");
  scanf("%i", &b);

  suma = a + b;
  resta = a - b;
  multiplicacion = (suma)*(resta);
  cuadrado = (a*a) - (b*b);
	
  printf("El resultado de la multiplicacion es %i", multiplicacion);
  printf("\n");
  printf("El resultado de la resta al cuadrado es %i", cuadrado);
  printf("\n");
  
  return EXIT_SUCCESS;
}
