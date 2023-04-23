#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[6];

    for(int i = 0; i < 6; i++){
        printf("Digite %io valor: ", (i+1));
        scanf("%i", &vetor[i]);
    }


    printf("\nOrdem Crescente\n");
    for(int i = 0; i < 6; i++){
        printf("%i ", vetor[i]);
    }

    printf("\n\nOrdem Decrescente\n");
    for(int i = 5; i >= 0; i--){
        printf("%i ", vetor[i]);
    }

    return 0;
}