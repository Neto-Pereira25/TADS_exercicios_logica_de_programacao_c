#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, qtd_lidos = 0, qtd_pares = 0;

    printf("Digite numeros e descubra se o numero e' par ou nao\n");
    printf("Digite o numero 1000 para encerrar o programa\n");
    
    do{
        printf("Digite um numero: ");
        scanf("%i", &numero);

        if(numero % 2 == 0){
            system("cls");
            printf("\nO numero %i e' par\n", numero);
            qtd_pares++;
        } else {
            system("cls");
            printf("\nO numero %i nao e' par\n", numero);
        }
        qtd_lidos++;
    } while (numero != 1000);
    
    printf("\nForam lidos %i numeros\n", qtd_lidos);
    printf("\nForam lidos %i numeros pares\n\n", qtd_pares);

    return 0;
}