/* Programa que le pide al usuario una letra o numero, y te dice si se trata de una vocal, una consonante, o una cifra numerica.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

char tecla;
printf("Teclea una letra o un numero: ");
scanf("%c", &tecla);
switch (tecla)
{
    case ' ': printf("Espacio.\n");
              break;
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': printf("Vocal.\n");
              break;
    case 'b':
    case 'c':
    case 'd':
    case 'f':
    case 'g':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z': printf("Consonante.\n");
              break;
    default: printf("Cifra Numérica.\n");
}

  return EXIT_SUCCESS;
}
