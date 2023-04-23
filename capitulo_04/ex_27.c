#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10], qtdDivisores;

    for(int i = 0; i < 10; i++){
        printf("Digite o %io valor: ", (i+1));
        scanf("%i", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        qtdDivisores = 0;
        for(int j = 1; j <= vetor[i]; j++){
            if(vetor[i] % j == 0){
                qtdDivisores++;
            }
        }
        if(qtdDivisores == 2){
            printf("O numero %i da posicao %i eh primo\n", vetor[i], (i+1));
        }
    }


    return 0;
}