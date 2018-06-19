
#include <stdio.h>
#include <stdlib.h>

#define gente 50

int main(){

    struct {
        char nombre[15];
        char direccion[30];
        int telefono;
        int edad;
    } persona;

    int l;
    int opcion;

    do {
    printf("Escribe nombre: ");
    fgets(persona.nombre, 15 , stdin);
    fflush(stdin);

    printf("Escribe su direccion: ");
    fgets(persona.direccion, 30 , stdin);
    fflush(stdin);

    printf("Escribe su numero de telefono: ");
    scanf("%i", &persona.telefono);

    printf("Escribe su edad: ");
    scanf("%i", &persona.edad);

   
    } while(scanf("%[^\n]", &persona.nombre));
    

    printf("Escoja una opción.\n");
    printf("1.Mostrar la lista de todos los nombre.\n");
    printf("2.Mostrar las personas de una cierta edad.\n");
    printf("3.Mostrar las personas cuya inicial sea la que el usuario indique\n");
    printf("4.Salir del programa\n");

  return EXIT_SUCCESS;
}
