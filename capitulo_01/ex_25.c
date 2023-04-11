#include <stdio.h>

int main()
{

    float metros_quadrados, acres;

    printf("Informe uma área em acres: ");
    scanf("%f", &acres); 

    metros_quadrados = acres * 4048.58;

    printf("%.2f acres equivale a %.2f m²", acres, metros_quadrados);

    return 0;
}