#include <stdio.h>

int main()
{

    float volume, litros;
    printf("Digite uma medida em m³: ");
    scanf("%f", &volume);

    litros = 1000 * volume;

    printf("o volume de %.2f equivale a %.2f em litros", volume, litros);

    return 0;
}