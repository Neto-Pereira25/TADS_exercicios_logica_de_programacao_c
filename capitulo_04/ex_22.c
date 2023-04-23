#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor_A[10];
    int vetor_B[10];
    int vetor_C[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o %io valor: ", (i+1));
        scanf("%i", &vetor_A[i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("Digite o %io valor: ", (i+1));
        scanf("%i", &vetor_B[i]);
    }

    for(int i = 0; i < 10; i++){
        if((i % 2) == 0){
            vetor_C[i] = vetor_A[i];
        } else {
            vetor_C[i] = vetor_B[i];
        }
    }

    for(int i = 0; i < 10; i++){
        printf("Vetor A na Pos %i = %i\tVetor B na Pos %i = %i\tVetor C na Pos %i = %i\n",
        (i+1), vetor_A[i], (i+1), vetor_B[i], (i+1), vetor_C[i]);
    }

    return 0;
}