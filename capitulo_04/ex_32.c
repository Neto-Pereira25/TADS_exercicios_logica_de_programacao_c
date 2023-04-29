#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetorX[5], vetorY[5];
    int somaXY[5], produto[5], difereca[5];
    int interseccao[5], uniao[10];
    int tamanhoInterseccao = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o %io valor do vetor X: ", (i+1));
        scanf("%i", &vetorX[i]);
    }

    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("Digite o %io valor do vetor X: ", (i+1));
        scanf("%i", &vetorY[i]);
    }
    
    printf("\nVetor Soma: \n");
    
    for(int i = 0; i < 5; i++){
        somaXY[i] = vetorX[i] + vetorY[i];
        printf("%i ", somaXY[i]);
    }
    
    printf("\n\nVetor Produto: \n");
    
    for(int i = 0; i < 5; i++){
        produto[i] = vetorX[i] * vetorY[i];
        printf("%i ", produto[i]);
    }
    
    printf("\n\nVetor Diferenca: \n");
    
    for(int i = 0; i < 5; i++){
        difereca[i] = vetorX[i] - vetorY[i];
        printf("%i ", difereca[i]);
    }
    
    printf("\n\nVetor Interseccao: \n");
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(vetorX[i] == vetorY[j]){
                interseccao[tamanhoInterseccao] = vetorX[i];
                tamanhoInterseccao++;
                break;
            }
        }
    }
    
    int i, j, n = 0, interseccaoNaoRepetida[tamanhoInterseccao];

    for(i = 0; i < tamanhoInterseccao; i++){
        for(j = 0; j < n; j++){
            if(interseccao[i] == interseccaoNaoRepetida[j]){
                break;
            }
        }
        if(j == n){
            interseccaoNaoRepetida[n] = interseccao[i];
            n++;
        }
    }
    
    for(i = 0; i < n; i++){
        printf("%i ", interseccaoNaoRepetida[i]);
    }
    
    printf("\n\nVetor Uniao: \n");
    
    for( i = 0, j = 0; i < 10; i++){
        if(i < 5){
            uniao[i] = vetorX[i];
        } else {
            uniao[i] = vetorY[j];
            j++;
        }
    }
    
    n = 0;
    int uniaoNaoRepetida[10];
    
    for(i = 0; i < 10; i++){
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

    for(i = 0; i < n; i++){
        printf("%i ", uniaoNaoRepetida[i]);
    }

    return 0;
}