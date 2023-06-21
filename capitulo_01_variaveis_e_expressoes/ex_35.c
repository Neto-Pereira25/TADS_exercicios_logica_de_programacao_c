#include <stdio.h>
#include <math.h>

int main()
{

    int cateto_a, cateto_b, hipotenusa;

    printf("Digite o valor do cateto A: ");
    scanf("%i", &cateto_a);

    printf("Digite o valor do cateto B: ");
    scanf("%i", &cateto_b);

    int soma_cat_quadrado = pow(cateto_a, 2) + pow(cateto_b, 2);

    hipotenusa = sqrt(soma_cat_quadrado);

    printf("A hipotenusa desse triângulo é %i", hipotenusa);

    return 0;
}