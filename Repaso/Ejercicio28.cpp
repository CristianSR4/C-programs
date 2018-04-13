/* Programa que me muestra las letras de la Z a la A.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra;

    for (letra='Z'; letra>='A'; letra--)
        printf("%c\n", letra);

  return EXIT_SUCCESS;
}
