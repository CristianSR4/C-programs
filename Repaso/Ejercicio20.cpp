/* Pide al usuario tres numeros y dice cual es el mas grande */

#include <stdio.h>
#include <stdlib.h>

int main(){

int numeroUno;
int numeroDos;
int numeroTres;

  printf("Teclee el primer numero: ");
  scanf("%i", &numeroUno);
  
  printf("Teclee el segundo numero: ");
  scanf("%i", &numeroDos);
 
  printf("Teclee el tercer numero: ");
  scanf("%i", &numeroTres);

  if ((numeroUno>numeroDos) && (numeroUno>numeroTres))
	printf("El mayor de los tres es el %i\n", numeroUno);
  else
    if ((numeroDos>numeroUno) && (numeroDos>numeroTres))
	printf("El mayor de los tres es el %i\n", numeroDos);
  else
    if ((numeroTres>numeroUno) && (numeroTres>numeroDos))
	printf("El mayor de los tres es el %i\n", numeroTres);

  return EXIT_SUCCESS;
}
