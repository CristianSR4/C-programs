/*Pide numeros los guarda en una tabla, los suma y te hace una media utilizando for.*/

#include <stdio.h>
#include <stdlib.h>


int main(){

    double numero[4];
    double media;

    for(int c=0; c<4; c++) {

    printf("Escribe un numero: ");
    scanf("%lf", &numero[c]);

    }

    media = (numero[0] + numero[1] + numero[2] + numero[3])/4;

    printf("Su media es %lf\n", media);


  return EXIT_SUCCESS;
}
