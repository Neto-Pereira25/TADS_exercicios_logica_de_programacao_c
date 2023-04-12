#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int opcao;
    float velocidade, conversao;

    do{
        printf("\n=====================MENU=====================\n");
        printf("1 - Converter km/h para m/s\n");
        printf("2 - Converter m/s para km/h\n");
        printf("3 - Sair do Programa\n");
        printf("Qual opcao voce deseja escolher:\n");
        scanf("%i", &opcao);

        switch(opcao){
            case 1:
                printf("Digite a velocidade em km/h: ");
                scanf("%f", &velocidade);
                conversao = velocidade / 3.6;
                printf("%.2f km/h equivale a %.2f m/s\n",
                velocidade, conversao);
                break;

            case 2:
                printf("Digite a velocidade em m/s: ");
                scanf("%f", &velocidade);
                conversao = velocidade * 3.6;
                printf("%.2f m/s equivale a %.2f km/h\n",
                velocidade, conversao);
                break;

            case 3:
                printf("O programa encerrou!!!\n\n");
                break;

            default:
                system("clear");
                printf("\nOpcao invalida\n\n");
        }

    }while(opcao != 3);
    
    return 0;
}