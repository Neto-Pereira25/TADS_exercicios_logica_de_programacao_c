#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int vetor[10], soma = 0;
    float media;

    for(int i = 0; i < 10; i++){
        printf("Digite o %io valor: ", (i+1));
        scanf("%i", &vetor[i]);
        soma += vetor[i];
    }

    media = soma/10.0;
    soma = 0;

    for(int i = 0; i < 10; i++){
        soma += pow((vetor[i] - media), 2);
    }
    
    float desvioPadrao;

    desvioPadrao = sqrt(soma/10);

    printf("O desvio padrao eh = %.2f\n", desvioPadrao);

    return 0;
}