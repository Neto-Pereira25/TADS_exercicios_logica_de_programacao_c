#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero = 1, maior, menor;

    for(int i = 1; numero >= 0; i++){
        system("cls");
        printf("Digite um numero: ");
        scanf("%i", &numero);


        if(numero < 0 && i == 1){
            system("cls");
            printf("\nVoce saiu do loop\n\n");
            break;
        }

        if(numero < 0){
            system("cls");
            printf("\n%i foi o maior numero digitado\n", maior);
            printf("%i foi o menor numero digitado\n\n", menor);
            break;
        }

        if(i == 1){
            maior = numero;
            menor = numero;
        } else if(numero > maior){
            maior = numero;
        } else if(numero < menor){
            menor = numero;
        }
    }
    
    

    return 0;
}