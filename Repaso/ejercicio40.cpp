/* Escribo nombres hasta escribir un enter, y luego me los muestra todos en pantalla.*/

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main(){

    char nombres[100][80];
    int l = 0;

    do {
      printf("Escribe un nombre: ");
      __fpurge(stdin);
    } while (scanf("%[^\n]", nombres[l++]));


    printf("Los nombres son: \n");
    for (int i=0; i<l; i++)
        printf("\t%s\n", nombres[i]);

    printf("\n");

  return EXIT_SUCCESS;
}
