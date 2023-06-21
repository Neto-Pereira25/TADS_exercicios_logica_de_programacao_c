#include <stdio.h>

int main()
{

    int numero, unidade, dezena, centena, milhar;
    printf("Digite um número entre 1000 e 9999: ");
    scanf("%i", &numero);

    milhar = numero/1000;
    centena = (numero - milhar*1000)/100;
    dezena = (numero - milhar*1000 - centena*100)/10;
    unidade = numero - milhar*1000 - centena*100 - dezena*10;

    printf("%i\n", milhar);
    printf("%i\n", centena);
    printf("%i\n", dezena);
    printf("%i\n", unidade);

    return 0;
}