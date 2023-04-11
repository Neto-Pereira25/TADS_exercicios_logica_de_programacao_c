#include <stdio.h>

int main()
{

    float valor, valor_final;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    valor_final = valor * 0.88;

    printf("O valor final do produto é %.2f", valor_final);

    return 0;
}