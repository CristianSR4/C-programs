/* Programa pregunta datos de una cancion y los muestra en pantalla*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    struct {
        char artista[15];
        char titulo[15];
        int duracion;
        int tamano;
    } cancion;

  printf("Escribe el artista de la cancion: ");
  fgets(cancion.artista, 15, stdin);
  fflush(stdin);

  printf("Escribe el titulo de la cancion: ");
  fgets(cancion.titulo, 15, stdin);
  fflush(stdin);

  printf("Escribe la duracion de la cancion: ");
  scanf("%i", &cancion.duracion);
  
  printf("Escribe el tamaño de la cancion: ");
  scanf("%i", &cancion.tamano);

  printf("\n");

  printf("El nombre del artista es: %s", cancion.artista);
  printf("El titulo de la cancion es: %s", cancion.titulo);
  printf("La duracion de la cancion es: %i\n", cancion.duracion);
  printf("El tamano de la cancion es: %i\n", cancion.tamano);

  return EXIT_SUCCESS;
}
