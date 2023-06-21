#include <stdio.h>

int main()
{

    int numero, num_anterior, num_proximo;

    printf("Digite um número inteiro: ");
    scanf("%i", &numero);

    num_anterior = numero - 1;
    num_proximo = numero + 1;

    printf("O número digitado foi %i,\n", numero);
    printf("seu antecessor é %i\n", num_anterior);
    printf("seu sucessor é %i\n", num_proximo);

    return 0;
}