#include <stdio.h>

int main()
{

    float area, hectares;

    printf("Informe uma hectar de terra: ");
    scanf("%f", &hectares);

    area = hectares * 10000;

    printf("%.2f hectares equivale %.2f m²", hectares, area);

    return 0;
}