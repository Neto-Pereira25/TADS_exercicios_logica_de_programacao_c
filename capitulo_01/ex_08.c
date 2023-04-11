#include <stdio.h>

int main()
{

    float graus_C, kelvin;

    printf("Digite uma temperatura em graus Kelvin: ");
    scanf("%f", &kelvin);

    graus_C = kelvin - 273.15;

    printf("%f em graus Kelvin equivalem a %f graus Celsius", kelvin, graus_C);

    return 0;
}