#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero1;
	int numero2;
	int multiplicacion;
	
	printf("Escribe un numero: ");
	scanf("%i", &numero1);

	if(numero1 == 0)
		printf("Adios muy buenas\n");
	else {
	 printf("Escribe un numero: ");
	scanf("%i", &numero2);
}
	multiplicacion = numero1 * numero2;

	printf("La multiplicacion da %i\n", multiplicacion);

  return EXIT_SUCCESS;
}
