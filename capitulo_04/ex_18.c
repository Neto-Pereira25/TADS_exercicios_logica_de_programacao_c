#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10], num, qtd_multiplo = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite o %iº valor: ", (i+1));
        scanf("%i", &vetor[i]);
        if(vetor[i] < 0){
            vetor[i] = 0;
        }
    }
    
    printf("Digite um numero para saber quais multiplos aparecem no vetor: ");
    scanf("%i", &num);
    
    for(int i = 0; i < 10; i++){
        if((vetor[i] % num) == 0){
            qtd_multiplo += 1;
            printf("%i\n", vetor[i]);
        }
    }
    
    printf("\nExistem %i multiplos de %i\n", qtd_multiplo, num);
    
    return 0;
}