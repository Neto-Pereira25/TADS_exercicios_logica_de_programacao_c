#include <stdio.h>

int main()
{

    float metros, jardas;
    printf("Digite uma medida em metros: ");
    scanf("%f", &metros);

    jardas = metros / 0.91;

    printf("%.2f metros equivale %.2f jardas", metros, jardas);

    return 0;
}