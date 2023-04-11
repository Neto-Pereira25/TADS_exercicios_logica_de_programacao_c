#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int numero;

    do{
        printf("Digite um numero: ");
        scanf("%i", &numero);
        printf("\n");
        if(numero < 0 || numero % 2 == 0){
            system("cls");
            printf("Digite um valor positivo impar!!!\n");
        }
    }while(numero < 0 || numero % 2 == 0);

    for(int i = numero; i >= 1; i--){
        if(i % 2 != 0){
            printf("%i\n", (i));
        }
    }
    printf("\n");
    
    return 0;
}