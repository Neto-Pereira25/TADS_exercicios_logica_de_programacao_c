#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int vetor1[10], vetor2[10], uniao[20];

    for(int i = 0; i < 10; i++){
        printf("Digite o %io valor do vetor 1: ", (i+1));
        scanf("%i", &vetor1[i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("Digite o %io valor do vetor 2: ", (i+1));
        scanf("%i", &vetor2[i]);
    }
    
    for(int i = 0, j = 0; i < 20; i++){
        if(i < 10){
            uniao[i] = vetor1[i];
        } else {
            uniao[i] = vetor2[j];
            j++;
        }
    }

    int i, j, n=0, uniaoNaoRepetida[20];

    for(i = 0; i < 20; i++){
        for(j = 0; j < n; j++){
            if(uniao[i] == uniaoNaoRepetida[j]){
                break;
            }
        }
        if(j == n){
            uniaoNaoRepetida[n] = uniao[i];
            n++;
        }
    }

    printf("\nVetor Uniao: ");
    for(i = 0; i < n; i++){
        printf("%i ", uniaoNaoRepetida[i]);
    }

    return 0;
}