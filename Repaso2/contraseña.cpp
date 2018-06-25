#include <stdio.h>
#include <stdlib.h>

int main(){

	int contrasena;

	do {
	printf("Escribe contraseña: ");
	scanf("%i", &contrasena);
	
}while(contrasena != 567);

printf("Contraseña correcta.\n");

  return EXIT_SUCCESS;
}
