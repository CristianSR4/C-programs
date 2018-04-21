
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char frase[40]; 

    printf("Escribe tu frase: ");
    scanf("%s ", frase);

   for (int l=0; l<40; l++)
  printf("Tu frase es: %s ", gets(frase));

    printf("\n");

  return EXIT_SUCCESS;
}
