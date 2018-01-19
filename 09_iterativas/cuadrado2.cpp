
#include <stdio.h>
#include <stdlib.h>

int main(){
    int l = 6;
//Pintar cada:
//fila de cuadrados
for (int fc=0; fc<l; fc++)
//  fila
  for (int f=0; f<l; f++){
//    columna de cuadrados
for (int cc=0; cc<l; cc++)
//      columna
for (int c=0; c<l; c++)
//        si f+c par
if ((fc + cc) % 2)
//          *
printf(" ");
//        sino
else
//          ' '
printf("*");
//  salto de linea
printf("\n");
  }
  return EXIT_SUCCESS;
}
