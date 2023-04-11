#include <stdio.h>

int main()
{

    float graus_C, graus_F;

    printf("Digite uma temperatura em graus celsius: ");
    scanf("%f", &graus_C);

    graus_F = graus_C*(9.0/5.0) + 32.0;

    printf("%f em graus Celsius equivale a %f em graus Fahrenheit", graus_C, graus_F);

    return 0;
}