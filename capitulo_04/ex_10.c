#include <stdio.h>
#include <stdlib.h>

int main(){

    float notas[15], soma = 0, media;

    for(int i = 0; i < 15; i++){

        printf("Digite %io nota: ", (i+1));
        scanf("%f", &notas[i]);

        soma += notas[i];
    }

    media = soma/15;

    printf("\nA media geral = %.2f\n\n", media);

    return 0;
}