#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcion;

    do {
        printf("Por pavor introduzca valores: ");
        scanf("%i", &opcion);
    }while((opcion>0)&&(opcion<6));

    printf("Valor incorrecto, lo siento.\n");

  return EXIT_SUCCESS;
}
