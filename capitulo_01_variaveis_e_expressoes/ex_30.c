#include <stdio.h>

int main()
{
    
    float real, dolar;

    printf("Informe um valor em reais: ");
    scanf("%f", &real);

    dolar = real / 5.34;

    printf("%.2f reais equivale a %.2f dólares", real, dolar);

    return 0;
}