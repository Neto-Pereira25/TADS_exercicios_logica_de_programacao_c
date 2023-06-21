#include <stdio.h>

int main()
{

    float salario, salario_final;
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    salario_final = salario *1.25;

    printf("O salário final foi de %.2f", salario_final);

    return 0;
}