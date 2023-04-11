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

    for(int i = 0; i < numero; i++){
        printf("%i\n", (i+1));
    }
    printf("\n");

    return 0;
}