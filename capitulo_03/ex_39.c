#include <stdio.h>
#include <stdlib.h>

int main(){

    // int lado_1, lado_2, lado_3, condicao_1;;
    // do{
    //     do{
    //         printf("\nDigite o 1 lado do triangulo: ");
    //         scanf("%i", &lado_1);
    //         if(lado_1 < 1){
    //             system("cls");
    //             printf("Digite um valor maior que ZERO!!!\n");
    //         }
    //     } while (lado_1 < 1);

    //     do{
    //         printf("\nDigite o 2 lado do triangulo: ");
    //         scanf("%i", &lado_2);
    //         if(lado_2 < 1){
    //             system("cls");
    //             printf("Digite um valor maior que ZERO!!!\n");
    //         }
    //     } while (lado_2 < 1);

    //     do{
    //         printf("\nDigite o 3 lado do triangulo: ");
    //         scanf("%i", &lado_3);
    //         if(lado_3 < 1){
    //             system("cls");
    //             printf("Digite um valor maior que ZERO!!!\n");
    //         }
    //     } while (lado_3 < 1);
        
    //     condicao_1 = (
    //         (lado_1 + lado_2 > lado_3) &&
    //         (lado_1 + lado_3 > lado_2) &&
    //         (lado_3 + lado_2 > lado_1)
    //     );

    //     if(!condicao_1){
    //         system("cls");
    //         printf("Lados informados nao formam um triangulo!!!\n");
    //     }

    // }while(!condicao_1);

    int base, altura;
    float area;

        do{
            printf("\nDigite a base do triangulo: ");
            scanf("%i", &base);
            if(base < 1){
                system("cls");
                printf("Digite um valor maior que ZERO!!!\n");
            }
        } while (base < 1);

        do{
            printf("\nDigite a altura do triangulo: ");
            scanf("%i", &altura);
            if(altura < 1){
                system("cls");
                printf("Digite um valor maior que ZERO!!!\n");
            }
        } while (altura < 1);

        area = (base * altura)/2.0;

        printf("\nArea = %.2f\n\n", area);

    return 0;
}