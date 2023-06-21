#include <stdio.h>

int main()
{

    int num_dias;
    float valor_receber;

    printf("Digite o número de dias trabalhados: ");
    scanf("%i", &num_dias);

    valor_receber = (num_dias * 30) * 0.92;

    printf("O encanador vai receber %.2f", valor_receber);

    return 0;
}