#include <stdio.h>
#include <stdlib.h>

 bool tiene_un_divisor(int dividendo, int posible_division){
     
         if(posible_division%dividendo==0){
             printf("holi", dividendo, posible_division);
         }
     }

int main() {

  if(tiene_un_divisor(8, 7))
      printf("El 8 tiene, al menos, un divisor.\n");


  return EXIT_SUCCESS;
}
