#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, soma = 0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        if(numero < 1){
            system("cls");
            printf("Digite um numero maior que 0\n");
        }
    }while(numero < 1);

    for(int i = 1; i <= numero; i++){
        soma += i;
    }

    printf("Sequencia 1 = %d\n", soma);

    soma = 0;

    for(int i = 0; i <= numero; i++){
            if(i % 2 == 0){
            soma -= i;
            printf("%i - ", i);
            } else {
                soma += i;
                printf("%i - ", i);
            }
    }

    printf("Sequencia 2 = %d\n", soma);

    soma = 0;
    int i = 0, qtd_termos = 0;
    while(qtd_termos != numero){
        
        if(i % 2 != 0){
            soma += i;
            printf("%i - ", i);
            qtd_termos++;
        }
        i++;
    }

    printf("Sequencia 3 = %d\n\n", soma);

    return 0;
}