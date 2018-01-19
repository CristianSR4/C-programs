
#include <stdio.h>
#include <stdlib.h>

#define TRIANGULO 1
#define CUADRADO 2
#define PARALELOGRAMO 3
#define PENTAGONO 4
#define CIRCULO 5

int main(){
  
    unsigned opcion;

    system("toilet --gay -fpagga AREAS");

    printf(
            "Elige la figura:\n"
            "\n"
            "\t1. Triángulo.\n"
            "\t2. Cuadrado.\n"
            "\t3. Paralelogramo.\n"
            "\t4. Pentágono.\n"
            "\t5. Círculo.\n"
            "\n"
            "\tOpcion: ");

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
