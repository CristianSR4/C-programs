
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char gets(char frase[40]); 

    printf("Escribe tu frase: ");
    scanf("%s ", &frase);

  printf("Tu frase es: %s", gets(frase));

    printf("\n");

  return EXIT_SUCCESS;
}
