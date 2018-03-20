/* programa para calcular áreas de varios círculos, usando un bucle while; no se especifica el número de círculos */

#include <stdio.h>

#define PT 3.14159

float procesar(float radio);  /* prototipo de función */

main() {
    float radio, area;  /* declaración de variable */

    printf("Para PARAR, introducir 0 en el valor del radio\n");
    printf("\nRadio = ");
    scanf("%f", &radio);

    while (radio !=0) {

        if (radio < 0)
            area = 0;
        else
            area = procesar(radio);

        printf("Area = %f\n", area);

        printf("\nRadio = ");
        scanf("%f", &radio);
    }
}

float procesar(float r) {  /* definición de la función */
    float a;  /* declaración de variable local */

    a = PT * r * r;
    return(a);
}
