
#include <stdio.h>
#include <stdlib.h>

#define TRIANGULO 1
#define CUADRADO 2
#define PARALELOGRAMO 3
#define PENTAGONO 4
#define CIRCULO 5


const char *opciones[] = {
    "Triángulo" ,
    "Cuadrado" ,
    "Paralelogramo" ,
    "Pentágono" ,
    "Círculo" ,
    NULL
}; 

int main(){
  
    unsigned eleccion;

    system("toilet --gay -fpagga AREAS");

    printf("Elige la figura:\n" "\n");
            printf("\t%i. %s. \n", i, opcion);
            printf("\t%i. %s. \n", i,);
            printf("\t%i. %s. \n", i,);
            printf("\t%i. %s. \n", i,);
            printf("\t%i. %s. \n", i,);
            printf("\n" "\tOpcion: ");

            scanf(" %u" , &eleccion);

    switch(opcion) {
        case TRIANGULO:
            printf("△");
            break;

        case CUADRADO:
            printf("□");
            break;

        case PARALELOGRAMO:
            printf("▱");
            break;

        case PENTAGONO:
            printf("⬠");
            break;

        case CIRCULO:
            printf("○");
            break;
        default:
            printf("Del 1 al 5, borrico.\n");
            break;
    }

  printf("\n");  
  return EXIT_SUCCESS;
}
