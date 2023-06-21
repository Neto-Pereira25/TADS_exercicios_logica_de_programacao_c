#include <stdio.h>

int main()
{

    float salario_base, salario_final;

    printf("Informe o salário base: ");
    scanf("%f", &salario_base);

    salario_final = (salario_base*1.05) - (salario_base*0.07);

    printf("O salário a receber é de: %.2f", salario_final);

    return 0;
}