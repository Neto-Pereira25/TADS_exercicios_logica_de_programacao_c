#include <stdio.h>
#include <stdlib.h>

int main(){

    int soma = 0;

    for(int i = 1; i < 1000; i++){
        if((i % 3 == 0) || (i % 5 == 0)){
            soma += i;
        }
    }
    system("cls");
    printf("Soma dos multiplos de 3 ou 5 = %d\n\n", soma);

    return 0;
}