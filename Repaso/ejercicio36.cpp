/* Escribe una frase y te la imprime tal y como es con el fgets.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char frase[40]; 

    printf("Escribe tu frase: ");
    fgets(frase, 40, stdin);

   
   printf("Tu frase es: %s ", frase);

    printf("\n");

  return EXIT_SUCCESS;
}
