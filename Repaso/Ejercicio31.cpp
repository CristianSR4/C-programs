/*Programa que da 6 oportunidades para adivinar el numero, y te va diciendo si te quedas corto o te pasas*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero = 56;
    int intento;

    for(intento=1; intento<=6; intento++) {
        printf("Escribe un numero: ");
        scanf("%i", &numero);
    
        if (numero<56)
            printf("Se quedó corto.\n"); 
        else
            if (numero>56)
            printf("Se pasó.\n");
        else
           if (numero==56) {
               printf("Acertó.\n");
        return 0; }
    }

  return EXIT_SUCCESS;
}
