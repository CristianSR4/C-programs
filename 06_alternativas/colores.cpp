
#include <stdio.h>
#include <stdlib.h>

int main(){

  int azul;
  int rojo;
  int amarillo;

  printf("Primer color(0 si no ves el color o 1 si lo ves): ");
  scanf(" %i", &azul);

  printf("Segundo color(0 si no ves el color o 1 si lo ves): ");
  scanf(" %i", &rojo);

  printf("Tercer color(0 si no ves el color o 1 si lo ves): ");
  scanf(" %i", &amarillo);

  if (azul == 0 && rojo == 0 && amarillo == 0)
      printf("El color es el blanco.\n");
  else if (azul == 1 && rojo == 0 && amarillo == 0)
      printf("El color es el azul.\n");
  else if (azul == 1 && rojo == 1 && amarillo == 0)
      printf("El color es el morado.\n");
  else if (azul == 1 && rojo == 0 && amarillo == 1)
      printf("El color es el verde.\n");
  else if (azul == 1 && rojo == 1 && amarillo == 1)
      printf("El color es el negro.\n");
  else if (azul == 0 && rojo == 1 && amarillo == 1)
      printf("El color es el naranja.\n");
  else if (azul == 0 && rojo == 1 && amarillo == 0)
      printf("El color es el rojo.\n");
  else if (azul == 0 && rojo == 0 && amarillo == 1)
      printf("El color es el amarillo.\n");
    else 
      printf("Solo 0 y 1.\n");

  return EXIT_SUCCESS;
}
