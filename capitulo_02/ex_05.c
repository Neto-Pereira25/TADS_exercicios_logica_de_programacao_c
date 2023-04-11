#include <stdio.h>

int main(){

    int numero;
    
    printf("Digite um número: ");
    scanf("%i", &numero);

    if(numero % 2 == 0){
        printf("O número %i é par!", numero);
    } else {
        printf("O número %i é ímpar!", numero);
    }

    return 0;
}
