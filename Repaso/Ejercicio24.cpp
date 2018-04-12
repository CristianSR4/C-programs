/*Programa que me pregunta la contraseña tantas veces hasta que la acierto. */

#include <stdio.h>
#include <stdlib.h>

int main(){

int numero;
 printf("Teclea la contraseña: ");
 scanf("%d", &numero);
  while (numero!=4567) {

         printf("Es incorrecto.\n");
         printf("Teclea otro número (0 para salir): ");
         scanf("%d", &numero);
}
   printf("Es Correcto.\n");

  return EXIT_SUCCESS;
}
