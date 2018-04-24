/*El usuario escribe un numero del 1 al 12 y le dice del mes que se trata.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char meses[13][11] = {
      "",  
      "Enero",
      "Febrero",
      "Marzo",
      "Abril",
      "Mayo",
      "Junio",
      "Julio",
      "Agosto",
      "Septiembre",
      "Octubre",
      "Noviembre",
      "Diciembre"
    };

    int numero;

    printf("Seleccione numero de mes: ");
    scanf("%i", &numero);
    printf("El mes que has dicho es: %s\n", meses[numero]);
    

  return EXIT_SUCCESS;
}
