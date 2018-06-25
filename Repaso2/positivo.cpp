#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero1;
	int numero2;

	printf("Escribe un numero: ");
	scanf("%i", &numero1);
	printf("Escribe otro numero: ");
	scanf("%i", &numero2);

	if ((numero1 >= 0) && (numero2 >= 0))
		printf("Los dos positivos.\n");
	else if ((numero1 >= 0) || (numero2 >= 0))
		printf("Uno de los dos es positivo.\n");
	else if ((numero1 < 0) && (numero2 < 0)) 
		printf("Los dos negativos.\n");


  return EXIT_SUCCESS;
}
