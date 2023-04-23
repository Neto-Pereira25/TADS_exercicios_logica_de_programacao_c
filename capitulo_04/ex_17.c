#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10];
    
    for(int i = 0; i < 10; i++){
        printf("Digite o %iº valor: ", (i+1));
        scanf("%i", &vetor[i]);
        if(vetor[i] < 0){
            vetor[i] = 0;
        }
    }
    
    printf("Valores do VETOR: \n");
    for(int i = 0; i < 10; i++){
        printf("%i ", vetor[i]);
        
    }

    return 0;
}