#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int numero;

    do{
        printf("Digite um numero: ");
        scanf("%i", &numero);
        printf("\n");
        if(numero < 0){
            system("cls");
            printf("Digite um valor positivo!!!\n");
        }
    }while(numero < 0);

    if(numero >= 0){
        for(int i = 0; i <= numero; i++){
            if(i % 2 == 0){
                printf("%i\n", (i));
            }
        }
        printf("\n");
    } else {
        printf("Valor Inválido!!!\n");
    }

    return 0;
}