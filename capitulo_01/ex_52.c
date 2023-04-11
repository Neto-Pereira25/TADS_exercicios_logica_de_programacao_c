#include <stdio.h>

int main()
{

    float valor_apostador_1, valor_apostador_2, valor_apostador_3;
    float premio, total;
    float porc_apostador_1, porc_apostador_2, porc_apostador_3;

    printf("Digite o valor que o apostador 1 deu: ");
    scanf("%f", &valor_apostador_1);

    printf("Digite o valor que o apostador 2 deu: ");
    scanf("%f", &valor_apostador_2);

    printf("Digite o valor que o apostador 3 deu: ");
    scanf("%f", &valor_apostador_3);

    printf("Digite o valor do prêmio: ");
    scanf("%f", &premio);

    total = valor_apostador_1 + valor_apostador_2 + valor_apostador_3;

    porc_apostador_1 = valor_apostador_1/total;
    porc_apostador_2 = valor_apostador_2/total;
    porc_apostador_3 = valor_apostador_3/total;

    printf("\nO jogador 1 apostou %.2f e receberá %.2f porcento do prêmio", valor_apostador_1, porc_apostador_1*100);
    printf(" isso equivale a %.2f R$\n\n", (premio * porc_apostador_1));

    printf("O jogador 2 apostou %.2f e receberá %.2f porcento do prêmio", valor_apostador_2, porc_apostador_2*100);
    printf(" isso equivale a %.2f R$\n\n", (premio * porc_apostador_2));

    printf("O jogador 3 apostou %.2f e receberá %.2f porcento do prêmio", valor_apostador_3, porc_apostador_3*100);
    printf(" isso equivale a %.2f R$\n\n", (premio * porc_apostador_3));

    return 0;
}