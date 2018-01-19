
#include <stdio.h>
#include <stdlib.h>

int incremental(int *p_var) {
    ++*p_var;
} 
int main(){

    int a = 7;

    incrementa(&a);
    printf("%i\n", a);

  return EXIT_SUCCESS;
}
