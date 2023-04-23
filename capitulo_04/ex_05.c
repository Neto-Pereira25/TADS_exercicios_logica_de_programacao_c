#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10], qtd_pares = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite %io valor: ", (i+1));
        scanf("%i", &vetor[i]);

        if(vetor[i] % 2 == 0){
            qtd_pares++;
        }
    }

    printf("\nValores Pares Digitados: \n");

    for(int i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            printf("\t%i\n", vetor[i]);
        }
    }

    printf("\nForam digitados %i valores pares\n\n", qtd_pares);

    return 0;
}