/* programa para calcular áreas de varios círculos, usando un bucle for; no se especifica el número de círculos */

#include <stdio.h>

#define PT 3.14159

float procesar(float radio);  /* prototipo de función */

main()
{

float radio, area;  /* declaración de variables */
int cont;  /* declaración de variables */

printf("Para PARAR, introducir 0 en el valor del radio\n");
printf("\nRadio =  ");
scanf("%f", &radio);

for (cont = 1; radio !=0; ++cont) {

	if (radio < 0)
		area = 0;
	else
		area = procesar(radio);

	printf("Area = %f\n", area);

	printf("\nRadio = ");
	scanf("%f", &radio);
}

}
float procesar(float r)  /* declaración de variable */
{
float a;

a = PT * r *r;
return(a);
}

