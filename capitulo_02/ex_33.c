#include <stdio.h>

int main(){
    
    float preco_antigo, preco_novo;

    printf("Digite o preço antigo: ");
    scanf("%f", &preco_antigo);

    if(preco_antigo >= 0 && preco_antigo <= 50){
        preco_novo = preco_antigo * 1.05;
        printf("O preço corrigido é %.2f\n\n", preco_novo);
    } else if(preco_antigo > 50 && preco_antigo <= 100){
        preco_novo = preco_antigo * 1.1;
        printf("O preço corrigido é %.2f\n\n", preco_novo);
    } else if(preco_antigo > 100){
        preco_novo = preco_antigo * 1.15;
        printf("O preço corrigido é %.2f\n\n", preco_novo);
    } else{
        printf("Digite um preço válido!!!\n\n");
    }
    
    return 0;
}