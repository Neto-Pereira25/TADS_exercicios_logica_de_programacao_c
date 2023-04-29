#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor1[10], vetor2[10], vetorInterseccao[10];
    int tamanhoDaInterseccao = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o %io valor do vetor 1: ", (i+1));
        scanf("%i", &vetor1[i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("Digite o %io valor do vetor 2: ", (i+1));
        scanf("%i", &vetor2[i]);
    }
    
    for(int i = 0, j = 0; i < 10  && j < 10; i++){
        for(int j = 0; j < 10; j++){
            if(vetor1[i] == vetor2[j]){
                vetorInterseccao[tamanhoDaInterseccao] = vetor1[i];
                tamanhoDaInterseccao++;
                break;
            }
        }
    }


    int i, j, n = 0, interseccaoNaoRepetido[tamanhoDaInterseccao];

    printf("\nVetor Interseccao: ");
    for( i = 0; i < tamanhoDaInterseccao; i++){
        for( j = 0; j < n; j++){
            if(vetorInterseccao[i] == interseccaoNaoRepetido[j]){
                break;
            }
        }
        if(j == n){
            interseccaoNaoRepetido[n] = vetorInterseccao[i];
            n++;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%i ", interseccaoNaoRepetido[i]);
    }
    
    return 0;
}