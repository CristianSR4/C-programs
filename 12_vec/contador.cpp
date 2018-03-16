#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int contador = 0;
    char cadena[50];

   printf("Ingrese la cadena: ");
   gets (cadena);
   
   for (int i = 0; cadena[i] != '\n'; i++) if (cadena[i] == 'a') contador ++;
   printf("La cantidad de letras 'a' de la palabra es: ", cadena);
     
   return 0;

  
}
