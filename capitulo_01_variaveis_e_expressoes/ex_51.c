#include <stdio.h>
#include <math.h>

int main()
{

    int coordenada_x, coordenada_y;
    int distancia;

    printf("Digite a coordenada X: ");
    scanf("%i", &coordenada_x);

    printf("Digite a coordenada Y: ");
    scanf("%i", &coordenada_y);

    distancia = sqrt((pow(coordenada_x, 2) + pow(coordenada_y, 2)));

    printf("A distância da origem é de %i", distancia);

    return 0;
}