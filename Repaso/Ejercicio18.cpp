/* Programa el cual pregunta al usuario una letra y dice si es vocal o no. */

#include <stdio.h>
#include <stdlib.h>

int main(){

  char letra;

   printf("Escriba una letra: ");
   scanf("%c", &letra);

    if ((letra=='a') || (letra=='e') || (letra=='i') || (letra=='o') || (letra=='u'))
	printf("La letra seleccionada es vocal\n");
    else 
	printf("La letra seleccionada no es vocal\n");

  return EXIT_SUCCESS;
}
