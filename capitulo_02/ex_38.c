#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int dia, mes, ano, ANO_VALIDO = 1905;
    system("cls");

    printf("\nDigite sua data de nascimento no formato:\n");
    printf("\tano - mes - dia\n");
    printf("Digite um ano: ");
    scanf("%i", &ano);

    if(ano < ANO_VALIDO){
        printf("\nAno Invalido!!!\n\n");
    } else {
        // Verificando se o ano é bissexto
        if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
            printf("Digite um mes (apenas numeros): ");
            scanf("%i", &mes);
            
            // Validando o mes
            if(mes < 0 || mes > 12 ){
                printf("Mes Invalido!!!");
            } else {
                switch (mes)
                {
                case 1:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 31 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 2:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 29 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 3:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 31 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 4:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 30 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 5:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 31 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 6:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 30 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 7:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 31 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 8:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 31 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 9:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 30 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 10:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 31 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 11:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 30 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 12:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 31 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                }
            }
            // Anos não bissextos
        } else {
            printf("Digite um mes (apenas numeros): ");
            scanf("%i", &mes);
            
            // Validando o mes
            if(mes < 0 || mes > 12 ){
                printf("Mes Invalido!!!");
            } else {
                switch (mes)
                {
                case 1:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 31 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 2:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 28 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 3:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 31 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 4:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 30 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 5:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 31 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 6:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 30 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 7:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 31 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 8:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 31 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 9:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 30 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 10:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 31 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 11:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 30 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                
                case 12:
                    printf("Digite um dia do mes (apenas numeros): ");
                    scanf("%i", &dia);
                    if(dia > 31 || dia < 0){
                        system("cls");
                        printf("Data Invalida!!!");
                        break;
                    }
                    printf("Data Valida!!!\n");
                    printf("%i/%i/%i", dia, mes, ano);
                    break;
                }
            }
        }
    }
    return 0;
}