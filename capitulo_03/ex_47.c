#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int operacao, num_1, num_2;
    int soma;
    int subtracao;
    int multiplicacao;
    float divisao;

    do{
        
        printf("\n========== MENU DAS OPERACOES ==========\n");
        printf("1 - ADICAO\n");
        printf("2 - SUBTRACAO\n");
        printf("3 - MULTIPLICACAO\n");
        printf("4 - DIVISAO\n");
        printf("5 - SAIR\n");
        printf("Digite o numero da operacao que voce quer efetuar: ");
        scanf("%i", &operacao);

        switch(operacao){
            case 1:
                system("cls");
                printf("Digite o primeiro numero: ");
                scanf("%i", &num_1);
                printf("Digite o segundo numero: ");
                scanf("%i", &num_2);
                soma = num_1 + num_2;
                printf("\n%i + %i = %i\n\n", num_1, num_2, soma);
                break;
            case 2:
                system("cls");
                printf("Digite o primeiro numero: ");
                scanf("%i", &num_1);
                printf("Digite o segundo numero: ");
                scanf("\n%i", &num_2);
                subtracao = num_1 - num_2;
                printf("\n%i - %i = %i\n\n", num_1, num_2, subtracao);
                break;
            case 3:
                system("cls");
                printf("Digite o primeiro numero: ");
                scanf("%i", &num_1);
                printf("Digite o segundo numero: ");
                scanf("%i", &num_2);
                multiplicacao = num_1 * num_2;
                printf("\n%i * %i = %i\n\n", num_1, num_2, multiplicacao);
                break;
            case 4:
                system("cls");
                printf("Digite o primeiro numero: ");
                scanf("%i", &num_1);
                printf("Digite o segundo numero: ");
                scanf("%i", &num_2);
                divisao = num_1 / (num_2*1.0);
                printf("\n%i / %i = %.2f\n\n", num_1, num_2, divisao);
                break;
                break;
            case 5:
                system("cls");
                printf("Fim do Programa!!!\n\n");
                break;
            default:
                system("cls");
                printf("Opcao invalida!!!\n");

        }
    }while(operacao != 5);

    return 0;
}