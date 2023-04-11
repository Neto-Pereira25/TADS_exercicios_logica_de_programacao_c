#include <stdio.h>

int main()
{

    float total, total_desconto, parcela, comissao;

    printf("Informe o total: ");
    scanf("%f", &total);

    total_desconto = total*0.9;
    parcela = total/3;
    comissao = total * 0.05;

    printf("O total com desconto de 10 porcento é de %.2f\n", total_desconto);
    printf("Parcelando em 3x, cada parcela fica no valor de %.2f\n", parcela);
    printf("Caso a venda seja parcelada o vendedor vai receber");
    printf(" uma comissão de 5 porcento sobre a venda, isto é, %.2f", comissao);


    return 0;
}