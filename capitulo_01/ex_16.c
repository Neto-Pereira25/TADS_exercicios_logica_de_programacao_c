#include <stdio.h>

int main()
{

    float comprimento, polegadas, cm;

    printf("Digite valor para polegadas: ");
    scanf("%f", &polegadas);

    comprimento = polegadas * 2.54;

    cm = comprimento * 100;

    printf("%f polegadas equivalem a %f comprimento em metros\n", polegadas, comprimento);
    printf("%f o comprimento equivale a %f em centímetros\n", comprimento, cm);

    return 0;
}