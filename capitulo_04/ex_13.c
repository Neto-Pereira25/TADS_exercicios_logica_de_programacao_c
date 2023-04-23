#include <stdio.h>
#include <stdlib.h>

int main(){

    int valores[5], maior, menor, posicao_maior, posicao_menor;

    for(int i = 0; i < 5; i++){
        printf("\nDigite o %io valor: ", (i+1));
        scanf("%i", &valores[i]);

        if(i == 0){
            maior = valores[i];
            menor = valores[i];
            posicao_maior = i+1;
            posicao_menor = i+1;
        } else if (maior < valores[i]){
            maior = valores[i];
            posicao_maior = i+1;
        } else if (menor > valores[i]){
            menor = valores[i];
            posicao_menor = i+1;
        }
    }

    //system("cls");
    printf("\n");
    printf("\nO maior valor = %i\n", maior);
    printf("O menor valor = %i\n", menor);
    printf("A posicao do maior eh %i\n", posicao_maior);
    printf("A posicao do menor eh %i\n", posicao_menor);

    return 0;
}