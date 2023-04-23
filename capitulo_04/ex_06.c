#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10], maior, menor;

    for(int i = 0; i < 10; i++){
        printf("Digite %io valor: ", (i+1));
        scanf("%i", &vetor[i]);
        if(i == 0){
            maior = vetor[i];
            menor = vetor[i];
        } else if(maior < vetor[i]){
            maior = vetor[i];
        } else if(menor > vetor[i]){
            menor = vetor[i];
        }
    }

    printf("\nO maior valor digitado foi = %i\n", maior);
    printf("\nO menor valor digitado foi = %i\n\n", menor);

    return 0;
}