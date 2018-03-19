/* programa para calcular áreas de varios círculos usando un bucle for */

#include <stdio.h>

#define PT 3.14159

float procesar(float radio);  /* prototipo de función */

main ()
{
float radio, area;  /* declaración de variables */
int cont, n;       /* declaración de variables */

printf("Nº de círculos? ");
scanf("%d", &n);

for (cont = 1; cont <= n; ++cont) {
	printf("\nCírculo nº %d:  Radio = ", cont);
	scanf("%f", &radio);

	if (radio < 0)
		area = 0;
	else
		area = procesar(radio);
	
	printf("Area = %f\n", area);

	}       
}

float procesar (float r) /* definición de función */
{
 float a;  /* declaración de variable local */

 a= PT * r * r;
 return(a);
}
