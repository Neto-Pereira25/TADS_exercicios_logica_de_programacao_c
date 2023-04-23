#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor_A[6];

    vetor_A[0] = 1;
    vetor_A[1] = 0;
    vetor_A[2] = 5;
    vetor_A[3] = -2;
    vetor_A[4] = -5;
    vetor_A[5] = 7;

    int soma;

    soma = vetor_A[0] + vetor_A[1] + vetor_A[5];

    vetor_A[4] = 100;

    for(int i = 0; i<6; i++){
        printf("%i\n", vetor_A[i]);
    }

    printf("\nSoma = %i\n\n", soma);

    return 0;
}