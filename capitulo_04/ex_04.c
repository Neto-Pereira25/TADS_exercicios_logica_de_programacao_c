#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[8], valor_x, valor_y, soma;

    for(int i = 0; i < 8; i++){
        printf("Digite %io valor: ", (i+1));
        scanf("%i", &vetor[i]);
    }

    do{
        printf("Digite um valor entre 0 e 7: ");
        scanf("%i", &valor_x);
        if(valor_x > 7 || valor_x < 0){
            system("clear");
            printf("Valor Invalido!!!\n");
        }
    } while (valor_x > 7 || valor_x < 0);

    do{
        printf("Digite outro valor entre 0 e 7: ");
        scanf("%i", &valor_y);
        if(valor_y > 7 || valor_y < 0){
            system("clear");
            printf("Valor Invalido!!!\n");
        }
    } while (valor_y > 7 || valor_y < 0);
    
    soma = vetor[valor_x] + vetor[valor_y];

    printf("\nA soma do valor da posicao %i com o valor da posicao %i = %i\n\n",
    valor_x, valor_y, soma);

    return 0;
}