#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[6];

    for(int i = 0; i < 6; i++){
        printf("Digite %io valor: ", (i+1));
        scanf("%i", &vetor[i]);
    }

    for(int i = 0; i < 6; i++){
        printf("Valor %i = %i\n", (i+1), vetor[i]);
    }

    return 0;
}