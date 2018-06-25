#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero1;
	int numero2;
	int numero3;

	printf("Escribe primer numero: ");
	scanf("%i", &numero1);
	printf("Escribe segundo numero: ");
        scanf("%i", &numero2);
	printf("Escribe tercer numero: ");
        scanf("%i", &numero3);

	if((numero1 > numero2) && (numero1 > numero3))
		printf("El mayor es el numero 1\n");
	else if ((numero2 > numero1) && (numero2 > numero3))
		printf("El mayor es el numero 2\n");
	else printf("El mayor es el numero 3\n");

  return EXIT_SUCCESS;
}
