#include <stdio.h>
#include <stdlib.h>

#define N 10

bool es_primo(int numero){
    int contador =0;
    for(int f=1; f<=numero; f++){
        if(numero % f==0)
            contador++;
    }
    if (contador > 2)
        return false;
    return true;
}
int main(){
    int array[N];
    int index = 0;
    int numero = 1;
    while (index != N) {
        if(es_primo(numero))
            array[index++] = numero;
        numero++;
    }

    return EXIT_SUCCESS;
}

