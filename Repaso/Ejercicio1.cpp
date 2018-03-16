/* Programa para calcular el área de un círculo con comprobación de error */

#include <stdio.h>

#define PT 3.14159

float procesar(float radio);

main()
{
    float radio, area;

    printf("Radio = ");
    scanf("%f", &radio);
       
    if (radio < 0)
        area = 0;
    else
        area = procesar(radio);

    printf("Area = %f\n", area);

}

    float procesar (float r)
    {

        float a;

        a = PT * r * r;
        return(a);
    }

