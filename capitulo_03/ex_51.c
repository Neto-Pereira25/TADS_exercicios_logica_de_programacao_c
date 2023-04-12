#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario = 2000;
    int ano = 1996;

    for(int i = ano; i <= 2023; i++){
        if(i == 1996){
            salario *= 1.015;
        } else {
            salario *= 2;
        }
        printf("Ano %i\n", i);
        printf("\tSalario = %.2f\n", salario);
    }

    return 0;
}