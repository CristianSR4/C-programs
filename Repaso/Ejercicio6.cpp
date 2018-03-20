/* programa que multiplica numeros que el usuario elige */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int primerNumero;
    int segundoNumero;
    int multiplicacion;

    printf("Elige primer numero: ");
    scanf("%d", &primerNumero);
    printf("Elige segundo numero: ");
    scanf("%d", &segundoNumero);

    multiplicacion = primerNumero*segundoNumero;
    printf("El resultado de la multiplicacion es %d", multiplicacion);
    printf("\n");

    return EXIT_SUCCESS;
}
