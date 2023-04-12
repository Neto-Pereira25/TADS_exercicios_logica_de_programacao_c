#include <stdio.h>
#include <stdlib.h>

int main(){

    int saque;
    int qtd_notas_100, qtd_notas_50, qtd_notas_20;
    int qtd_notas_10, qtd_notas_5, qtd_notas_2, qtd_notas_1; 
    int unidade, dezena, centena, milhar;

    qtd_notas_100 = 0;
    qtd_notas_50 = 0;
    qtd_notas_20 = 0;
    qtd_notas_10 = 0;
    qtd_notas_5 = 0;
    qtd_notas_2 = 0;
    qtd_notas_1 = 0;
    
    do{
        printf("Digite o valor do saque: ");
        scanf("%i", &saque);
        if(saque < 1 || saque > 10000){
            system("cls");
            printf("Digite um valor entre 0 e 10.000 R$\n");
        }
    }while(saque < 1 || saque > 10000);
    
    centena = saque/100;
    dezena = (saque - (centena*100))/10;
    unidade = (saque - (centena*100) - (dezena*10));

    dezena *= 10;

    switch (dezena){
        case 10:
            qtd_notas_10 += 1;
            break;
        case 20:
            qtd_notas_20 += 1;
            break;
        case 30:
            qtd_notas_20 += 1;
            qtd_notas_10 += 1;
            break;
        case 40:
            qtd_notas_20 += 2;
            break;
        case 50:
            qtd_notas_50 += 1;
            break;
        case 60:
            qtd_notas_50 += 1;
            qtd_notas_10 += 1;
            break;
        case 70:
            qtd_notas_50 += 1;
            qtd_notas_20 += 1;
            break;
        case 80:
            qtd_notas_50 += 1;
            qtd_notas_20 += 1;
            qtd_notas_10 += 1;
            break;
        case 90:
            qtd_notas_50 += 1;
            qtd_notas_20 += 2;
            break;
        default:
            break;
    }

    switch (unidade){
        case 1:
            qtd_notas_1 += 1;
            break;
        case 2:
            qtd_notas_2 += 1;
            break;
        case 3:
            qtd_notas_2 += 1;
            qtd_notas_1 += 1;
            break;
        case 4:
            qtd_notas_2 += 2;
            break;
        case 5:
            qtd_notas_5 += 1;
            break;
        case 6:
            qtd_notas_5 += 1;
            qtd_notas_1 += 1;
            break;
        case 7:
            qtd_notas_5 += 1;
            qtd_notas_2 += 1;
            break;
        case 8:
            qtd_notas_5 += 1;
            qtd_notas_2 += 1;
            qtd_notas_1 += 1;
            break;
        case 9:
            qtd_notas_5 += 1;
            qtd_notas_2 += 2;
            break;
        default:
            break;
    }

    printf("\nVoce deseja sacar %i\n", saque);

    printf("Daremos:\n");
    printf("\t%i notas de 100 R$\n", centena);
    printf("\t%i notas de 50 R$\n", qtd_notas_50);
    printf("\t%i notas de 20 R$\n", qtd_notas_20);
    printf("\t%i notas de 10 R$\n", qtd_notas_10);
    printf("\t%i notas de 5 R$\n", qtd_notas_5);
    printf("\t%i notas de 2 R$\n", qtd_notas_2);
    printf("\t%i notas de 1 R$\n\n", qtd_notas_1);

    return 0;
}