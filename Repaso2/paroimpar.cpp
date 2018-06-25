#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero;

	printf("Escribe un numero: ");
	scanf("%i", &numero);

	if(numero % 2 == 0)
	printf("Es par\n");
	else printf("Es impar\n");

  return EXIT_SUCCESS;
}
