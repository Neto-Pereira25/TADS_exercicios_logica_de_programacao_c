#include <stdio.h>

int main()
{

    float metros_quadrados, acres;

    printf("Informe uma área em metros quadrados: ");
    scanf("%f", &metros_quadrados); 

    acres = metros_quadrados * 0.000247;

    printf("%.2f m² equivale a %.2f acres", metros_quadrados, acres);

    return 0;
}