/*Programa que le pide al usuario numeros, y cuando escriba 0 o numero negativo parara y te sumara los numeros puestos.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;
    int suma=0;
     
    do {
        printf("Escribe un número: ");
        scanf("%i", &numero);
        suma = suma + numero;
    }while (numero>0); 
    printf("Se acabo, el resultado es %i\n", suma);

  return EXIT_SUCCESS;
}
