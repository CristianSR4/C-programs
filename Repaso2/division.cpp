#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero1;
	int numero2;
	int division;
	
	printf("Escribe un numero: ");
	scanf("%i", &numero1);
	printf("Escribe otro numero: ");
	scanf("%i", &numero2);

	if(numero2 == 0) {
	   printf("Adios muy buenas\n");
	   return 0;
	}
	else { 
	   division = numero1 / numero2;
	}
	   printf("El resultado es %i\n", division);

  return EXIT_SUCCESS;
}
