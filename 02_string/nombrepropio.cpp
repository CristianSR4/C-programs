

#include <stdio.h>
#include <stdlib.h>

int main(){
  
    char nombre[16];
    

    printf("Tú nombre es:");
    scanf(" %[^\n]", nombre);

    printf("Tú nombre es: %s. \n ", nombre);  /* lee toda la linea menos \n */


  return EXIT_SUCCESS;
}
