#include <stdio.h>

int main()
{

    float numero, quintaParte;
    printf("Digite um número: ");
    scanf("%f", &numero);

    quintaParte = numero/5;

    printf("A quinta parte de %f é %f", numero, quintaParte);

    return 0;
}