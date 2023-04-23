#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor1[10], vetor2[10];
    int qtd_elemento_comum = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o %io do vetor 1: ", (i+1));
        scanf("%i", &vetor1[i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("Digite o %io do vetor 2: ", (i+1));
        scanf("%i", &vetor2[i]);
    }

    for(int i = 0, j = 0; i < 10  && j < 10; i++){
        if(vetor1[i] == vetor2[j]){
            qtd_elemento_comum++;
            j++;
            i = 0;
        }
    }

    printf("\n");

    int vetorInterseccao[qtd_elemento_comum];

    for(int i = 0, j = 0, k = 0; i < 10  && j < 10; i++){
        if(vetor1[i] == vetor2[j]){
            vetorInterseccao[k] == vetor1[i];
            j++;
            i = 0;
            k++;
        }
    }

    printf("\n\nElementos em comum entre o vetor 1 e o vetor 2\n");

    for(int i = 0; i < qtd_elemento_comum; i++){
        printf("%i\n", vetorInterseccao[i]);
    }

    return 0;
}