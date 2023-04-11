#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;
    float harmonico = 0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        if(numero < 1){
            system("cls");
            printf("Digite um numero maior que 0\n");
        }
    }while(numero < 1);

    for(int i = 1; i <= numero; i++){
        harmonico += (1.0/i);
    }

    printf("\nHarmonico = %.2f\n\n", harmonico);

    return 0;
}