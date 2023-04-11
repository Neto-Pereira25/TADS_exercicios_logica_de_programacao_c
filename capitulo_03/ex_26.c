#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf("Digite um numero de inicio: ");
    scanf("%d", &numero);

    int condicao_1, condicao_2, condicao_3;

    while (1){
        condicao_1 = numero % 11 == 0;
        condicao_2 = numero % 13 == 0;
        condicao_3 = numero % 17 == 0;
        
        if(condicao_1 || condicao_2 || condicao_3){
            printf("O primeiro multiplo encontrado foi %d\n\n", numero);
            break;
        }
        numero++;
    }
    

    return 0;
}