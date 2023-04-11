#include <stdio.h>

int main(){

    int numero;

    printf("Digite um número: ");
    scanf("%i", &numero);

    
    switch (numero) {
    case 1:
        printf("Domingo-Feira");
        break;
    case 2:
        printf("Segunda-Feira");
        break;
    case 3:
        printf("Terça-Feira");
        break;
    case 4:
        printf("Quarta-Feira");
        break;
    case 5:
        printf("Quinta-Feira");
        break;
    case 6:
        printf("Sexta-Feira");
        break;
    case 7:
        printf("Sábado-Feira");
        break;
    default:
        printf("Escreva um número entre 1 e 7");
        break;
    } 

    return 0;
}