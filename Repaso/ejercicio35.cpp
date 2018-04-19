/*Programa que te pregunta un nombre, y te lo muestra en pantalla al revés */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 15

int main(){

    char nombre[N];
    int i;

    printf("Escribe tu nombre: ");
    scanf("%s", nombre);

    for (i=0; nombre[i] != '\0' && i < N; i++);
    for (; i > 0; i--)
        printf("%c", nombre[i-1]);

    printf("\n");
    return EXIT_SUCCESS;
}
