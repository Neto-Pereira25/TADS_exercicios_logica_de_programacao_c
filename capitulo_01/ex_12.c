#include <stdio.h>

int main()
{

    float milhas, km;

    printf("Digite uma distância em milhas: ");
    scanf("%f", &milhas);

    km = milhas * 1.61;

    printf("O valor %f em milhas equivale a %f em km", milhas, km);

    return 0;
}