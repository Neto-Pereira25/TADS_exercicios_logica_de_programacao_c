#include <stdio.h>
#include <stdlib.h>

int main(){

    int intervalo, numero_1, numero_2;
    do{
        printf("Digite o intervalo: ");
        scanf("%i", &intervalo);
        if(intervalo < 1){
            system("clear");
            printf("Digite um valor maior que zero!!!\n");
        }
    }while(intervalo < 1);
    
    
    do{
        printf("Digite o primeiro numero: ");
        scanf("%i", &numero_1);
        if(numero_1 < 1){
            system("clear");
            printf("Digite um valor maior que zero!!!\n");
        }
    }while(numero_1 < 1);
    
    do{
        printf("Digite o segundo numero: ");
        scanf("%i", &numero_2);
        if(numero_2 < 1){
            system("clear");
            printf("Digite um valor maior que zero!!!\n");
        }
    }while(numero_2 < 1);
    
    int i = 0;
    int qtd = 0;

    while (qtd != intervalo){
        if((i % numero_1 == 0) || (i % numero_2 == 0)){
            
            if(qtd < intervalo - 1){
                printf("%i, ", i);
            } else {
                printf("%i.", i);
            }
            qtd++;
        }
        //printf("\nqtd = %i\n", qtd);
        i++;
    }
    
    

    return 0;
}