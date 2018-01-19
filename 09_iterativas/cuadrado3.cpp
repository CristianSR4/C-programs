
#include <stdio.h>
#include <stdlib.h>

#define ES_IMPAR(f,c) (( (f)+(c)) % 2) 

void pinta_cuadrado(int lado){

    for (int fila_cuad=0; fila_cuad<l; fila_cuad++)
        for (int fila=0; fila<lado; fila++){
            for (int col=0; col<lado; col++)
                for (int col=0; col<lado; col++)
                    if (ES_IMPAR(fila_cuad + col_cuad) % 2)
                        printf("%c", ES_IMPAR(fila_cuad, col_cuad) ? ' ' : '*');

            printf("\n");
        }
}
int main(){
    pinta_cuadrado(4);
    return EXIT_SUCCESS;
}
