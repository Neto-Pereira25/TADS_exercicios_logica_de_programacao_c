#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, qtd_divisores, soma = 0;
    int qtd_primos = 0;
    
    do{
        printf("Digite um numero: ");
        scanf("%i", &numero);
        if(numero < 2){
            system("cls");
            printf("Digite um numero maior que 1\n");
        }
    }while(numero < 2);

    int i = 1;

    do{
        qtd_divisores = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                qtd_divisores += 1;
            }
        }
        if(qtd_divisores == 2){
            soma += i;
            qtd_primos++;
        }
        if((qtd_primos < numero)){
            if((qtd_divisores == 2)){
                printf("%i + ", i);
            }
        } else {
            printf("%i", i);
        }
        i++;
    }while(qtd_primos != numero);

    printf(" = %i\n\n", soma);

    return 0;
}