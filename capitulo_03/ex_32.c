#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int dado_1, dado_2, jogadas;

    printf("Quantas vezes deseja rolar os dados? ");
    scanf("%i", &jogadas);

    for(int i = 1; i <= jogadas; i++){
        dado_1 = rand() % 6+1;
        dado_2 = rand() % 6+1;
        printf("Lancamento %i\n", i);
        if(dado_1 > dado_2){
            printf("\tDado 1 = %i\n", dado_1);
            printf("\tDado 2 = %i\n", dado_2);
            printf("\tDado 1 > Dado 2\n");
        } else if(dado_1 < dado_2){
            printf("\tDado 1 = %i\n", dado_1);
            printf("\tDado 2 = %i\n", dado_2);
            printf("\tDado 2 > Dado 1\n");
        }else{
            printf("\tDado 1 = %i\n", dado_1);
            printf("\tDado 2 = %i\n", dado_2);
            printf("\tDado 1 = Dado 2\n");
        }
    }
    

    return 0;
}