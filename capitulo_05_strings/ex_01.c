#include <stdio.h>

int main(){

    char nome[100];

    printf("Digite seu nome: ");
    scanf("%100[^\n]", nome);

    printf("\nSeu nome eh = %s\n\n", nome);

    return 0;
}