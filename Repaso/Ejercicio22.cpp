/* programa que da al usuario 3 oportunidades para adivinar un numero del 1 al 10 */

#include <stdio.h>
#include <stdlib.h>

int main(){

int numero;

  printf("Teclea un número: ");
  scanf("%i", &numero);
  
   if ((numero<=1) && (numero>=10)) {
    printf("No escogiste un numero dentro del rango, otra oportunidad.\n");
    printf("Teclea otro numero: ");
    scanf("%i", &numero); }
  else
    if ((numero<=1) && (numero>=10)) {
     printf("No escogiste un numero dentro del rango, otra oportunidad.\n");
     printf("Teclea otro numero, ultima oportunidad: ");
     scanf("%i", &numero); }
  else
    if ((numero<=1) && (numero>=10)) 
     printf("Lo siento no acerto el rango.\n");
   else
    if ((numero>=1) && (numero<=10))
    printf("Enhorabuena, su numero esta dentro del rango.\n");
 
  return EXIT_SUCCESS;
}
