#include <stdio.h>
#include <stdlib.h>

int main(){

    double numero[4];
    double media;

    printf("Escribe un numero: ");
    scanf("%lf", &numero[0]);

    printf("Escribe segundo numero: ");
    scanf("%lf", &numero[1]);
   
    printf("Escribe tercer numero: ");
    scanf("%lf", &numero[2]);
   
    printf("Escribe cuarto numero: ");
    scanf("%lf", &numero[3]);
   
    media = (numero[0] + numero[1] + numero[2] + numero[3])/4;

    printf("Su media es %lf\n", media);

  return EXIT_SUCCESS;
}
