/*Usuario escribe dos palabras y las compara con strcmp.*/

#include <stdio.h>
#include <string.h>

int main(){

    char texto1[40], texto2[40];

    printf("Introduce una palabra: ");
    fgets(texto1, 40, stdin);

    printf("Introduce otra palabra: ");
    fgets(texto2, 40, stdin);

    if (strcmp(texto1, texto2)==0)
        printf("Son iguales\n");
    else
        printf("Son distintas\n");

    return 0;
}


