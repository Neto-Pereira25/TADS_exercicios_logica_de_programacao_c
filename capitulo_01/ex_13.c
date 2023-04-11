#include <stdio.h>

int main()
{

    float milhas, km;

    printf("Digite uma distância em quilômetro: ");
    scanf("%f", &km);

    milhas = km / 1.61;

    printf("O valor %f em quilômetros equivale a %f em milhas", km, milhas);

    return 0;
}