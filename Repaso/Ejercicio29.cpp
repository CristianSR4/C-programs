/* Tabla de multiplicar del 1 al 9.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;
    int tabla;

    for(tabla=1; tabla<=9; tabla++) {
        for(numero=1; numero<=10; numero++)
            printf("La tabla de multiplicar %i por %i es: %i \n", tabla, numero, tabla*numero);
      }


  return EXIT_SUCCESS;
}
