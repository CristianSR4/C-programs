/* Suma mediante funciones.*/

#include <stdio.h>
#include <stdlib.h>

int suma (int op1, int op2) {
    return op1 + op2;
}
   
int main(){

    int resultado;
    resultado = suma(2,3);
    printf("El resultado de la suma es: %i\n", resultado);

  return EXIT_SUCCESS;
}
