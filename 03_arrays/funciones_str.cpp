
#include <stdio.h>
#include <stdlib.h>

#define N 0X100

int main(){

  const char *p = "The world is: "; //constante tipo cadena
  
  /*Pequeña lección sobre punteros
  char const *p; //Puntero a una constante.Forma de decir que el char es constante.
  char * const p; //Puntero constante (fijo)
  char const * const p; //Puntero fijo a una constante.
*/

  // Puntero: Es una variable que contiene una dirección de memoria.

  char frase[N] = "a vampire.\n"; //Inicialización
  char *d = frase; //el * puntua la palabra char
  
  d = &frase[2]; //operador

  frase[2] == 'v'; //Notacion de matrices
  *d == 'v'; //Notacion de punteros
  *(d+2) == 'm'; //el 2 esta en aritmetica de punteros

  printf(" d ocupa %lu bytes.\n", sizeof(d));

  return EXIT_SUCCESS;
}
