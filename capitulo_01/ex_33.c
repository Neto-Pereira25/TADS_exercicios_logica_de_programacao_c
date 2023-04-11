#include <stdio.h>

int main()
{

    int lado, area;

    printf("Digite o lado do quadrado: ");
    scanf("%i", &lado);

    area = lado * lado;

    printf("A área é %i", area);

    return 0;
}