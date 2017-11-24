#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define N 0x26

int main(){
  char nombre[N];
  int lista[N];

  char no_[N] = {'p', 'e', 'p', 'e', '\0'};
  char nom [N] = "pepe";

  nom[3] = 'a'; //Despues de inicializar hay que ie celda a celda (verso a verso)

  printf("Nombre Ocupa: %lu bytes.\n", sizeof(nombre));
  printf("Nombre Ocupa: %Xh bytes.\n", (int) sizeof(nombre));
  printf("Lista Ocupa: %lu bytes.\n", sizeof(lista));
  printf("Lista Ocupa: %lu celdas.\n", sizeof(lista) / sizeof(int));

  printf("%c", nombre[0]);
  printf("%c", nombre[1]);
  printf("%c", nombre[2]);
  printf("%c", nombre[3]);
  printf("%c", nombre[4]);
  printf("%c", nombre[5]);
  printf("\n");

  printf("%s\n", nombre);

  bzero(lista, sizeof(lista));

  memset(lista + 1, 3, 3);
  printf("%x.", lista[0]);
  printf("%x.", lista[1]);
  printf("%x.", lista[2]);
  printf("%x.", lista[3]);
  printf("%x.", lista[4]);
  printf("%x.", lista[5]);
  printf("\n");

  printf("Dime tu nombre: ");
  fgets(nombre, N, stdin); //contenido de variable nombre(nombre), si es la 1920, en esa escribimos lo que salga del tubo.
  sprintf(nom, "Hola, %s", nombre); //tubo por el que sale, imprime en direccion de memoria en vez de pantalla como hace printf
  printf("%s\n", nom);

  return EXIT_SUCCESS;
}
