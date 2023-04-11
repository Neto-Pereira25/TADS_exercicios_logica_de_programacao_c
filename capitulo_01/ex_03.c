#include <stdio.h>

int main()
{

    int valor1, valor2, valor3, soma;

    printf("Digite um número 1: ");
    scanf("%d", &valor1);

    printf("Digite um número 2: ");
    scanf("%d", &valor2);
    
    printf("Digite um número 3: ");
    scanf("%d", &valor3);

    soma = valor1 + valor2 + valor3;

    printf("A soma dos valores digitados é: %d", soma);

    return 0;
}