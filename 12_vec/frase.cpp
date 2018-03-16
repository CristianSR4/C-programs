
#include <stdio.h>
#include <stdlib.h>

int main(){

    char frase[] = "Mi moto alpina derrapante";
    char *punt =frase;
    char *fr = frase;

    while (*fr != '\0'){
          printf("%c",*fr);
          *fr++;
    }
          printf("\n");
    while (*punt != '\0'){

          
          if( *punt == '0' || *punt == 'a' || *punt == 'i' || *punt == 'u'){
                *punt = 'e';
                printf("%c",*punt);
                *punt++;}
          else {
              printf("%c", *punt);
              *punt++;}
    }

          printf("\n");

  return EXIT_SUCCESS;
}
