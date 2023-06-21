#include <stdio.h>
#include <math.h>

int main()
{

    float angulo, rad;

    printf("Digite um ângulo: ");
    scanf("%f", &angulo);

    rad = angulo * 3.1415/180;

    printf("O ângulo %0.2f equivale a %0.2f em radianos", angulo, rad);

    return 0;
}