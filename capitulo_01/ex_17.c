#include <stdio.h>

int main()
{

    float comprimento, polegadas;

    printf("Digite um comprimento em cm: ");
    scanf("%f", &comprimento);

    polegadas = comprimento / 2.54;

    printf("%f cm equivalem a %f polegadas\n", comprimento, polegadas);

    return 0;
}