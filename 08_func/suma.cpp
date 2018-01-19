
#include <stdio.h>
#include <stdlib.h>

int suma(int op1, int op2) {
    return op1 + op2;
}

int main(){
    
    int op1;
    int op2;

    printf("Número 1: ");
    scanf(" %i", &op1);
    printf("Número 2: ");
    scanf(" %i", &op2);
    int resultado = suma (op1,op2);
    printf("La suma de los numeros es: %i\n ", resultado);

  return EXIT_SUCCESS;
}
