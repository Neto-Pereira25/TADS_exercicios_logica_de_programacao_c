#include <stdio.h>

int main(){
    
    int codigo, quantidade;
    float preco;

    printf("========== MENU ==========\n");
    printf("Código\tPreço\tEspecificação\n");
    printf("100\t1.20\tCachorro Quente\n");
    printf("101\t1.30\tBauru Simples\n");
    printf("102\t1.50\tBauru Com Ovo\n");
    printf("103\t1.20\tHamburguer\n");
    printf("104\t1.70\tCheeseburguer\n");
    printf("105\t2.20\tSuco\n");
    printf("106\t1.00\tRefrigerante\n");
    
    printf("Digite o código do lanche: ");
    scanf("%i", &codigo);
    
    if(codigo >= 100 && codigo <= 106){
        printf("Digite a quantidade do lanche: ");
        scanf("%i", &quantidade);

        if(codigo == 100){
            preco = 1.2 * quantidade;
            printf("O valor a ser pago é %.2f R$\n\n", preco);
        } else if(codigo == 101){
            preco = 1.3 * quantidade;
            printf("O valor a ser pago é %.2f R$\n\n", preco);
        } else if(codigo == 102){
            preco = 1.5 * quantidade;
            printf("O valor a ser pago é %.2f R$\n\n", preco);
        } else if(codigo == 103){
            preco = 1.2 * quantidade;
            printf("O valor a ser pago é %.2f R$\n\n", preco);
        } else if(codigo == 104){
            preco = 1.7 * quantidade;
            printf("O valor a ser pago é %.2f R$\n\n", preco);
        } else if(codigo == 105){
            preco = 1.2 * quantidade;
            printf("O valor a ser pago é %.2f R$\n\n", preco);
        } else if(codigo == 106){
            preco = 1.0 * quantidade;
            printf("O valor a ser pago é %.2f R$\n\n", preco);
        }
    } else {
        printf("Código Inválido!!!\n\n");
    }

     
    
    
    return 0;
}