#include <stdio.h>

int main(void){

    int estado;
    float valor, preco_final;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("\nDigite um número para escolher um estado: \n");
    printf("1 - MG\n");
    printf("2 - SP\n");
    printf("3 - RJ\n");
    printf("4 - MS\n");
    scanf("%i", &estado);

    if(estado == 1) {
        preco_final = valor * 1.07;
        printf("Preco final = %.2f\n", preco_final);
    } else if (estado == 2) {
        preco_final = valor * 1.12;
        printf("Preco final = %.2f\n", preco_final);
    } else if (estado == 3) {
        preco_final = valor * 1.15;
        printf("Preco final = %.2f\n", preco_final);
    } else if (estado == 4) {
        preco_final = valor * 1.08;
        printf("Preco final = %.2f\n", preco_final);
    } else {
        printf("Estado invalido!!!\n");
    } 
    

    return 0;
}