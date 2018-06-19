#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(){

    double suma;
    double a[N] = {1, 2, 3};
    double b[N] = {1, 2, 3};

    for(int i=0; i<N; i++){
      suma += a[i] * b[i];
  }
      printf("%2lf\n", suma);
     

  return EXIT_SUCCESS;
}
