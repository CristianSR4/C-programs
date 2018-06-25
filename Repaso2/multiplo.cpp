#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero1;
	int numero2;

	printf("Escribe un numero: ");
	scanf("%i", &numero1);
	printf("Escribe otro numero:");
	scanf("%i", &numero2);

	if (numero1 % numero2 == 0)
	printf("Es multiplo.\n");
	else printf("No lo es.\n");

  return EXIT_SUCCESS;
}
