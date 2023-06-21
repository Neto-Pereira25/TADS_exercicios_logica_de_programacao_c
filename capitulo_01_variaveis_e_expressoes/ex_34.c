#include <stdio.h>
#define PI 3.141592

int main()
{

    float raio, area;
    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);

    area = PI * raio;

    printf("A área da circunferência é %.2f", area);

    return 0;
}