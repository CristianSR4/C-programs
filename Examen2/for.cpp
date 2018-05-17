#include <stdio.h>
#include <stdlib.h>

int main(){

    double suma;
    double a[3] = {5, 8, 2};
    double b[3] = {3, 2, 5};

    for(int d=0; d<3; d++){
      suma += a[d] * b[d];
  }
      printf("%2lf\n", suma);
     

  return EXIT_SUCCESS;
}
