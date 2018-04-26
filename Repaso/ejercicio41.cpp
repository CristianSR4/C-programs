
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

  printf("El nombre del artista es: %s\n", cancion.artista);

  return EXIT_SUCCESS;
}
