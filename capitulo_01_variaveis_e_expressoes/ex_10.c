#include <stdio.h>

int main()
{

    float vel_km_h, vel_m_s;

    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &vel_km_h);

    vel_m_s = vel_km_h/3.6;

    printf("%f em k/h equivale a %f em m/s", vel_km_h, vel_m_s);

    return 0;
}