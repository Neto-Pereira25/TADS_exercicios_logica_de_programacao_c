#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10];

    for(int i = 0; i < 10; i++){
        printf("\nDigite %io valor: ", (i+1));
        scanf("%i", &vetor[i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < i; j++){
            if(i == j){
                continue;
            }
            if(vetor[i] == vetor[j]){
                break;
            } else {
                continue;
            }
        }
        printf("%i\n", vetor[i]);
    }

    printf("\n");

    return 0;
}