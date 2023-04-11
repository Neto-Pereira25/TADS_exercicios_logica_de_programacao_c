#include <stdio.h>

int main()
{
    
    float volume, litros;

    printf("Digite um volume em litros: ");
    scanf("%f", &litros);

    volume = litros / 1000;

    printf("%.2f em litros equivale a %.2f m³", litros, volume);
    
    return 0;
}