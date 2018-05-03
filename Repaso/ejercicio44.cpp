/* Suma mediante funciones.*/

#include <stdio.h>
#include <stdlib.h>

int suma (int op1, int op2) {
    return op1 + op2;
}
  
  
int main(){

    int resultado = suma;
    printf("Escribe primer valor: ");
    scanf("%i", &op1);
    printf("Escribe segundo valor: ");
    scanf("%i", &op2);
    printf("%i\n", resultado);

  return EXIT_SUCCESS;
}
