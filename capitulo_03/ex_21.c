#include <stdio.h>
#include <stdlib.h>

int main(){

    int num_1, num_2, soma = 0, multiplicacao = 1;

    do{
        system("cls");
        printf("\nDigite o primeiro numero: ");
        scanf("%i", &num_1);
        printf("Digite o segundo numero: ");
        scanf("%i", &num_2);
        if(num_1 == num_2){
            system("cls");
            printf("Digite numeros diferentes!!!\n");
        }
    }while (num_1 == num_2);

    if(num_1 > num_2){
        for(int i = num_2; i <= num_1; i++){
            if(i % 2 == 0){
                soma += i;
            }
            if(i % 2 != 0){
                multiplicacao *= i;
            }
        }
        printf("\nA soma dos numeros de %i ate %i e' = %i\n", num_2, num_1, soma);
        printf("A multiplicacao dos numeros de %i ate %i e' = %i\n\n", num_2, num_1, multiplicacao);
    } else {
        for(int i = num_1; i <= num_2; i++){
            if(i % 2 == 0){
                soma += i;
            }
            if(i % 2 != 0){
                multiplicacao *= i;
            }
        }
        printf("\nA soma dos numeros de %i ate %i e' = %i\n", num_1, num_2, soma);
        printf("A multiplicacao dos numeros de %i ate %i e' = %i\n\n", num_1, num_2, multiplicacao);
    }


    return 0;
}