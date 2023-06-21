#include <stdio.h>

int main()
{

    float kg, libras;

    printf("Informe uma quantidade em libras: ");
    scanf("%f", &libras);

    kg = libras * 0.45;

    printf("%.2f libras equivale a %.2f kg", libras, kg);

    return 0;
}