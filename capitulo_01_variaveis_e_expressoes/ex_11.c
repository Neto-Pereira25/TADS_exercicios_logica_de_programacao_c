#include <stdio.h>

int main()
{

    float vel_km_h, vel_m_s;

    printf("Digite uma velocidade em m/s: ");
    scanf("%f", &vel_m_s);

    vel_km_h = vel_m_s*3.6;

    printf("%f em m/s equivale a %f em km/h", vel_m_s, vel_km_h);

    return 0;
}