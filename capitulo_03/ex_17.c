#include <stdio.h>
#include <stdlib.h>

int main(void){

    int numero, soma = 0;

    do{
        printf("Digite um numero: ");
        scanf("%i", &numero);
        
        if(numero < 0){
            system("cls");
            printf("Digite um valor positivo!!!\n");
        }
    }while(numero < 0);

    for(int i = 0; i <= numero; i++){
        soma += i;
    }
    
    printf("\nSoma = %i\n\n", soma);


    return 0;
}