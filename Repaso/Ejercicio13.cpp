/* El usuario elige un numero y le dice si es par o impar */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;
    int par;
    int impar;

    printf("Elige un número: ");
    scanf("%i", &numero);

    if (numero % 2 == 0)
        printf("El numero es par.\n");
    else
        printf("El numero en impar.\n");
  return EXIT_SUCCESS;
}
