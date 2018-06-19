#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    printf("Números: \n");
    scanf("%d", &num);

    for(int i=0; i<=num; i++) {
        if(i%2==0) {
            printf("Es primo loco %d \n", i);
        }
    }



  return EXIT_SUCCESS;
}
