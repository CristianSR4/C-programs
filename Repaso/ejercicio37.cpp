#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

   char palabra[15], palabra1[15];

   printf("Escribe una palabra: ");
   scanf("%s", palabra);

   printf("Escribe otra palabra: ");
   scanf("%s", palabra1);

   strcat(palabra1, " ");
   strcat(palabra1, palabra);
   printf("Tus palabras son %s\n", palabra1);

  return EXIT_SUCCESS;
}
