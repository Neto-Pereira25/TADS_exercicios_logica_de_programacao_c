#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10];
    int qtd_pares = 0, qtd_impares = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o %io valor: ", (i+1));
        scanf("%i", &vetor[i]);
        if((vetor[i] % 2) == 0){
            qtd_pares++;
        } else {
            qtd_impares++;
        }
    }

    int vetorPar[qtd_pares], vetorImpar[qtd_impares];
    
    for(int i = 0, j = 0; i < 10; i++){
        if((vetor[i] % 2) == 0){
            vetorPar[j] = vetor[i];
            j++;
        }
    }
    
    for(int i = 0, j = 0; i < 10; i++){
        if((vetor[i] % 2) != 0){
            vetorImpar[j] = vetor[i];
            j++;
        }
    }

    printf("\nO vetor tem %i elementos PARES e %i elementos IMPARES\n",
    qtd_pares, qtd_impares);
    printf("\nElementos Pares do Vetor\n");
    for(int i = 0; i < qtd_pares; i++){
        printf("\t%i\n", vetorPar[i]);
    }

    printf("\nElementos Impares do Vetor\n");
    for(int i = 0; i < qtd_impares; i++){
        printf("\t%i\n", vetorImpar[i]);
    }

    return 0;
}