#include <stdio.h>

int main()
{

    float metros, jardas;
    printf("Digite uma medida em jardas: ");
    scanf("%f", &jardas);

    metros = jardas * 0.91;

    printf("%.2f jardas equivale %.2f metros", jardas, metros);

    return 0;
}