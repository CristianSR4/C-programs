#include <stdio.h>
#include <stdlib.h>

 bool tiene_un_divisor(int dividendo, int posible_divisor){
     if(posible_divisor == 1){
         printf("no hay divisor \n");
         return false;
     }
     if(dividendo % posible_divisor == 0){
         printf("el divisor es %i \n",posible_divisor);
         return true;
     }
     return tiene_un_divisor(dividendo,posible_divisor-1);
 }

int main() {

  if(tiene_un_divisor(8, 7))
      printf("El 8 tiene, al menos, un divisor.\n");


  return EXIT_SUCCESS;
}
