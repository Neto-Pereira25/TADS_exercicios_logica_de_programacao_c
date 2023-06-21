#include <stdio.h>

int main(){

    char nome[100];

    printf("\nDigite seu nome: ");
    fgets(nome, 100, stdin);

    printf("\nSeu nome eh = %s\n", nome);
    printf("As 4 primeiras letras sao = ");

    for(int i = 0; i < 4; i++){
        if(i < 3){
            printf("%c - ", nome[i]);
        } else {
            printf("%c", nome[i]);
        }
    }

    printf("\n\n");

    return 0;
}