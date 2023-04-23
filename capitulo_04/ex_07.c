#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10], maior, posicao;

    for(int i = 0; i < 10; i++){
        printf("Digite %io valor: ", (i+1));
        scanf("%i", &vetor[i]);
        if(i == 0){
            maior = vetor[i];
        } else if(maior < vetor[i]){
            maior = vetor[i];
            posicao = i+1;
        }
    }

    printf("\nO maior foi = %i e ele esta na posicao %i\n\n", maior, posicao);

    return 0;
}