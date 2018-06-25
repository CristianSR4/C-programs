#include <stdio.h>
#include <stdlib.h>

int main(){

int tabla;
int numero;

for(tabla=1; tabla<=9; tabla++) {
for(numero=1; numero<=10; numero++)
printf("La tabla de multiplicar de %i por %i es: %i\n", tabla, numero, tabla+numero);
}
  return EXIT_SUCCESS;
}
