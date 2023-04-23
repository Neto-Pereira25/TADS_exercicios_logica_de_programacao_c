#include <stdio.h>
#include <stdlib.h>

int main(){

    float vetor_A[5];
    float vetor_B[5];
    float produto_escalar = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o %io valor de A: ", (i+1));
        scanf("%f", &vetor_A[i]);
    }

    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("Digite o %io valor de B: ", (i+1));
        scanf("%f", &vetor_B[i]);
    }

    for(int i = 0; i < 5; i++){
        produto_escalar = produto_escalar + (vetor_A[i]*vetor_B[i]);
        printf("produto = %.2f\n", produto_escalar);
    }

    printf("O produto escalar dos conjuntos = %.2f\n", produto_escalar);

    return 0;
}