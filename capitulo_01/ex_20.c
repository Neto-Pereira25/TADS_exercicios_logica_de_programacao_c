#include <stdio.h>

int main()
{

    float kg, libras;

    printf("Informe uma quantidade em quilogramas: ");
    scanf("%f", &kg);

    libras = kg/0.45;

    printf("%.2f quilogramas equivale a %.2f libras", kg, libras);

    return 0;
}