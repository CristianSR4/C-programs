/* multiplicacion de numeros de 4 cifras, con long int */

#include <stdio.h>
#include <stdlib.h>

int main(){

long int primerNumero;
long int segundoNumero;
long int multiplicacion;

 multiplicacion = primerNumero * segundoNumero;
 
 printf("Elige el primer numero de 4 cifras: ");
 scanf("%li", &primerNumero);

 printf("Elige el segundo numero de 4 cifras: ");
 scanf("%li", &segundoNumero);

 printf("El resultado es %li", multiplicacion);
 printf("\n");

  return EXIT_SUCCESS;
}
