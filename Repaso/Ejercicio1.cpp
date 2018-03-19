/* Programa para calcular el área de un círculo con comprobación de error */

#include <stdio.h>

#define PT 3.14159

float procesar(float radio);   /* prototipo de función */

main()
{
    float radio, area;         /* declaración de variables */

    printf("Radio = ");
    scanf("%f", &radio);
       
    if (radio < 0)
        area = 0;
    else
        area = procesar(radio);

    printf("Area = %f\n", area);

}

    float procesar (float r)   /* definición de función */
    {

        float a;               /* declaración de variable local */

        a = PT * r * r;
        return(a);
    }

