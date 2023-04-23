#include <stdio.h>
#include <stdlib.h>

int main(){

    int valores[5], maior, menor, soma = 0;
    float media;

    for(int i = 0; i < 5; i++){
        printf("\nDigite o %io valor: ", (i+1));
        scanf("%i", &valores[i]);

        if(i == 0){
            maior = valores[i];
            menor = valores[i];
        } else if (maior < valores[i]){
            maior = valores[i];
        } else if (menor > valores[i]){
            menor = valores[i];
        }
        soma += valores[i];
    }

    media = soma / 5.0;

    system("cls");
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("%i valor inserido = %i\n", (i+1), valores[i]);
    }
    printf("\nO maior valor = %i\n", maior);
    printf("O menor valor = %i\n", menor);
    printf("A media dos valores = %.2f\n", media);

    return 0;
}