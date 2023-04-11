#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    float custo_compra, custo_fabrica, comissao, imposto;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custo_fabrica);

    if(custo_fabrica > 0 && custo_fabrica <= 12000){
        comissao = custo_fabrica * 0.05;
        imposto = 0;
    } else if(custo_fabrica > 12000 && custo_fabrica <= 25000){
        comissao = custo_fabrica * 0.1;
        imposto = custo_fabrica * 0.15;
    } else if(custo_fabrica > 25000){
        comissao = custo_fabrica * 0.15;
        imposto = custo_fabrica * 0.2;
    }

    custo_compra = custo_fabrica + comissao + imposto;

    printf("\nComissao = %.2f\n", comissao);
    printf("\nImposto = %.2f\n", imposto);
    printf("\nCusto de consumo = %.2f\n\n", custo_compra);
    
    return 0;
}