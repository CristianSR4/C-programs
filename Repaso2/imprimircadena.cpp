#include <stdio.h>
#include <stdlib.h>

char imprimir(char frase[], int entero){
   char letra = frase[entero];

  printf("%c", letra);
  entero++;
  if(letra != '\0')
     imprimir(frase, entero);
}

char inversa(char frase[], int entero){
    char letra = frase[entero];

    for(letra = 0; frase[letra] != '\0'; letra++);
    for(; letra > 0; letra--)
     printf("%c", frase[letra-1]);
        
}

int main(){

    char frase[] = "dabale arroz a la zorra el abad";
    int letra = 0;

    imprimir(frase, letra);
    printf("\n");
    inversa(frase, letra);

    printf("\n");

  return EXIT_SUCCESS;
}
