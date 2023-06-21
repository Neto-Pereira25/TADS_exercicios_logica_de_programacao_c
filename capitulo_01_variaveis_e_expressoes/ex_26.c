#include <stdio.h>

int main()
{

    float area, hectares;

    printf("Digite uma área: ");
    scanf("%f", &area);

    hectares = area * 0.0001;

    printf("%.2f m² equivale a %.2f hectares.", area, hectares);

    return 0;
}