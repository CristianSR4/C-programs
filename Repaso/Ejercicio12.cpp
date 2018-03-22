/* programa en el cual el usuario mete 3 numeros y le dice cual es el mayor */

#include <stdio.h>
#include <stdlib.h>

int main(){

float x,y,z;
float mayor;

  printf("ELige el primer numero: ");
  scanf("%f", &x);
  printf("Elige el segundo numero: ");
  scanf("%f", &y);
  printf("Elige el tercer numero: ");
  scanf("%f", &z);
  
  if ((x>y) && (x>z))
      mayor = x;
  else if (y>z)
       mayor = y;
    else mayor = z;

     printf("El mayor es %5.2f", mayor); 
     printf("\n"); 

  return EXIT_SUCCESS;
}
