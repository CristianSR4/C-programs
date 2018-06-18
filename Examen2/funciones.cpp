#include <stdio.h>
#include <stdlib.h>

void datos(int *a, int *b) {
    printf("Primer dato: ");
    scanf("%i", a);
    printf("Segundo dato: ");
    scanf("%i", b);
}

int main(){

    int a, b;

    datos(&a, &b);
    printf("%i\n", a);
    printf("%i\n", b);

  return EXIT_SUCCESS;
}
