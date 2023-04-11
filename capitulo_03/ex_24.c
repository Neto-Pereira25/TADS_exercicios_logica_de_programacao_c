#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, soma = 0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero < 0){
            system("cls");
            printf("Digite um numero positivo!!!\n");
        }
    } while (numero < 0);

    for (int i = 1; i <= numero; i++){
        if(numero % i == 0){
            soma += i;
            if(i == numero){
                soma -= numero;
                printf("%i - %i = %i", i, numero, soma);
            }else{
                printf("%i + ", i);
            }
        }
    }

    return 0;
}