#include <stdio.h>

int main()
{

    int numero, soma;
    
    printf("Digite um número inteiro: ");
    scanf("%i", &numero);

    soma = ((numero + 1)*3) + ((numero - 1)*2);

    printf("A soma do triplo do sucessor com o dobro do antecessor é %i", soma);

    return 0;
}