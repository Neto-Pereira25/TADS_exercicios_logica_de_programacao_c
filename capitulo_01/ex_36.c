#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main()
{

    float raio, volume;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    volume = PI * pow(raio, 2);

    printf("O volume do cilindro é %.2f", volume);

    return 0;
}