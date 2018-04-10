
#include <stdio.h>
#include <stdlib.h>

int main(){

int numero;
 printf("Teclea la contraseña: ");
 scanf("%d", &numero);
  while (numero!=4567) {

   if (numero==4567) printf("Es Correcto.\n");
    else printf("Es incorrecto.\n");
         printf("Teclea otro número (0 para salir): ");
         scanf("%d", &numero);
}
  return EXIT_SUCCESS;
}
