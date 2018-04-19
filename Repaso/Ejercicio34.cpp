/*Programa que te pregunta un nombre, y te lo muestra en pantalla con espacio en cada letra*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 15

int main(){

    char nombre[N];

    printf("Escribe tu nombre: ");
    scanf("%s", nombre);

    for (int i=0; nombre[i] != '\0' && i <N; i++)
        printf("%c ", nombre[i]);

    printf("\n");
    return EXIT_SUCCESS;
}
