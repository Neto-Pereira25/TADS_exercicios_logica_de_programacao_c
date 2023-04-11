#include <stdio.h>

int main()
{

    float comprimento, largura, preco_metro, area, custo;

    printf("Informe o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("Informe a largura do terreno: ");
    scanf("%f", &largura);

    area = comprimento * largura;

    printf("Informe preço do metro²: ");
    scanf("%f", &preco_metro);

    custo = preco_metro * area;

    printf("%.2f R$ é o custo para cercar o terreno", custo);

    return 0;
}