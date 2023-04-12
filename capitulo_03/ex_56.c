#include <stdio.h>
#include <stdlib.h>

int main(){

    int qtd_divisores, soma = 0;
    int qtd_primos = 0;

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
        if((qtd_primos < 2000000)){
            if((qtd_divisores == 2)){
                printf("%i + ", i);
            }
        } else {
            printf("%i", i);
        }
        i++;
    }while(qtd_primos < 2000000);

    printf(" = %i\n\n", soma);

    return 0;
}