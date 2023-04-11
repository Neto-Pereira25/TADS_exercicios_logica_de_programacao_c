#include <stdio.h>

int main()
{

    float angulo, rad;

    printf("Digite um radiano: ");
    scanf("%f", &rad);

    angulo = rad * 180/3.1415;

    printf("O radiano %0.2f equivale ao ângulo %0.2f ", rad, angulo);

    return 0;
}