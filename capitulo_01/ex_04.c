#include <stdio.h>

int main()
{

    float numero, quadrado;
    printf("Digite um número decimal: ");
    scanf("%f", &numero);

    quadrado = numero * numero;
    printf("O quadrado do número %f é %f", numero, quadrado);

    return 0;
}