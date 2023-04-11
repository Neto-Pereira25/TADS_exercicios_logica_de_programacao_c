#include <stdio.h>

int main()
{

    int numero, unidade, dezena, centena;

    printf("Digite um número entre 100 e 999: ");
    scanf("%i", &numero);
    
    printf("O numero lido e': %i\n", numero);

    centena = numero/100;
    dezena = (numero - centena*100)/10;
    unidade = numero - centena*100 - dezena*10;

    printf("O numero gerado e': %i%i%i\n",unidade, dezena, centena);
    


    return 0;
}