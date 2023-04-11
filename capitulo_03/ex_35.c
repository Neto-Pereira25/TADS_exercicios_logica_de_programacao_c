#include <stdio.h>
#include <stdlib.h>

int main(){

    int menor_num, maior_num, soma = 0;

    printf("Digite o menor numero do intervalor: ");
    scanf("%i", &menor_num);

    printf("Digite o maior numero do intervalor: ");
    scanf("%i", &maior_num);

    if(menor_num > maior_num){
        printf("Voce digitou um intervalo invalido!!!\n\n");
    } else {

        for(int i = menor_num; i <= maior_num; i++){
            
            if(i % 2 != 0){
                soma += i;
                printf("%i - ", i);
            }
        }
        printf("A soma eh = %i\n\n", soma);
    }
    return 0;
}