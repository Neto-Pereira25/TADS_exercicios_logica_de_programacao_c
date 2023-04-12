#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, qtd_divisores = 0;
    
    do{
        printf("Digite um numero: ");
        scanf("%i", &numero);
        if(numero < 2){
            system("cls");
            printf("Digite um numero maior que 1\n");
        }
    }while(numero < 2);

    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){
            qtd_divisores += 1;
        }
    }

    if(qtd_divisores == 2){
        printf("O numero %i eh primo\n\n", numero);
    } else {
        printf("O numero %i nao eh primo\n\n", numero);
    }

    return 0;
}