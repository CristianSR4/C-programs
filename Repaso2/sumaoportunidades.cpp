#include <stdio.h>
#include <stdlib.h>

int main(){

	int suma=0;
	int numero;

	do {
	
	printf("Escriba numeros:" );
	scanf("%i", &numero);
	suma = suma + numero;
}while(numero>0);

	printf("La suma es: %i\n", suma);
  return EXIT_SUCCESS;
}
