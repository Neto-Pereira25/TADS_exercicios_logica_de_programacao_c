#include <stdio.h>

int main()
{

    float graus_C, graus_F;

    printf("Digite uma temperatura em graus Fahrenheit: ");
    scanf("%f", &graus_F);

    graus_C = 5.0 * (graus_F - 32.0)/9.0;

    printf("%f em graus Fahrenheit equivale a %f em graus Celsius", graus_F, graus_C);

    return 0;

}