#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero;

	printf("Escribe un numero: ");
	scanf("%i", &numero);

	if ((numero <= 1) || (numero >=10)) {
		printf("Otro intento.\n");
	printf("Escribe un numero: ");
        scanf("%i", &numero); 
	}
	if ((numero <= 1) || (numero >=10)) {
	 printf("Otro intento:\n");
        printf("Escribe un numero: ");
        scanf("%i", &numero); 
	}
	if ((numero <= 1) || (numero >=10)) 
 	 printf("Lo siento fallaste.\n");
	else if ((numero >= 1) && (numero <=10)) 
		printf("Correcto.\n");	
		
	 

  return EXIT_SUCCESS;
}
