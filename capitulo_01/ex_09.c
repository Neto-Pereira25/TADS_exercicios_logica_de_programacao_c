#include <stdio.h>

int main()
{

    float graus_C, kelvin;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &graus_C);

    kelvin = graus_C + 273.15;

    printf("%f em graus Celsius equivalem a %f graus Kelvin", graus_C, kelvin);

    return 0;
}