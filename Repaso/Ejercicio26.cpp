
#include <stdio.h>
#include <stdlib.h>

int main(){


    int codigo;
    int clave;

    do {
        printf("Escribe el código de usuario: ");
        scanf("%i", &codigo);
        printf("Escribe la clave: ");
        scanf("%i", &clave);

        if ((codigo!=1024) || (clave!=4567))
            printf("No valido.\n");
    }while ((codigo!=1024) || (clave!=4567));
    printf("Correcto.\n");



  return EXIT_SUCCESS;
}
