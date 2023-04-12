#include <stdio.h>
#include <stdlib.h>

int main(){

    int qtd_habitantes, consumo_KW, codigo_consumidor;
    float kwh, conta_de_luz;
    float maior_consumo, menor_consumo, soma_consumo_total = 0;
    float media_consumo, total_consumo_populacao;
    float total_consumo_1, total_consumo_2, total_consumo_3;
    int soma_consumo_1 = 0, soma_consumo_2 = 0, soma_consumo_3 = 0;

    printf("Digite o numero de habitantes: ");
    scanf("%i", &qtd_habitantes);

    printf("Digite o valor do KWH: ");
    scanf("%f", &kwh);

    for(int i = 1; i <= qtd_habitantes; i++){
        
        system("cls");
        printf("Habitante %i\n\n", i);
        
        do{
            printf("========== CODIGO DE CONSUMO ==========\n");
            printf("\t1 - Residencial\n");
            printf("\t2 - Comercial\n");
            printf("\t3 - Industrial\n");
            printf("Qual seu codigo de consumo? ");
            scanf("%i", &codigo_consumidor);
            if(codigo_consumidor < 1 || codigo_consumidor > 3){
                system("cls");
                printf("\nDigite um numero que corresponda a uma das opcoes\n");
            }
        }while(codigo_consumidor < 1 || codigo_consumidor > 3);

        do{
            printf("\nQuanto foi consumido no mes em KW? ");
            scanf("%i", &consumo_KW);
            if(consumo_KW < 0){
                system("cls");
                printf("\nConsumo Invalido!!! Digite um valor Positivo\n");
            }
        }while(consumo_KW < 0);
        
        soma_consumo_total += consumo_KW;
        conta_de_luz = consumo_KW * kwh;

        if(i == 1){
            maior_consumo = conta_de_luz;
            menor_consumo = conta_de_luz;
        } else if(maior_consumo < conta_de_luz){
            maior_consumo = conta_de_luz;
        } else if(menor_consumo > conta_de_luz){
            menor_consumo = conta_de_luz;
        }

        if(codigo_consumidor == 1){
            soma_consumo_1 += consumo_KW;
        } else if(codigo_consumidor == 2){
            soma_consumo_2 += consumo_KW;
        }else if(codigo_consumidor == 3){
            soma_consumo_3 += consumo_KW;
        }
    }

    total_consumo_1 = soma_consumo_1 * kwh;
    total_consumo_2 = soma_consumo_2 * kwh;
    total_consumo_3 = soma_consumo_3 * kwh;
    total_consumo_populacao = soma_consumo_total * kwh;
    
    media_consumo = (soma_consumo_total / qtd_habitantes) * kwh;

    system("cls");
    
    printf("O maior consumo foi no valor de %.2f\n", maior_consumo);
    printf("O menor consumo foi no valor de %.2f\n", menor_consumo);
    printf("A media consumo da populacao foi no valor de %.2f\n", media_consumo);
    printf("O total de consumo da categoria Residencial foi de %.2f\n", 
    total_consumo_1);
    printf("O total de consumo da categoria Comercial foi de %.2f\n", 
    total_consumo_2);
    printf("O total de consumo da categoria Industrial foi de %.2f\n", 
    total_consumo_3);
    printf("O total de consumo da populacao foi de %.2f\n\n", 
    total_consumo_populacao);
    
    return 0;
}