#include <stdio.h>

int main()
{

    int valor1, valor2, valor3, soma_quadrados;

    printf("Digite o 1º valor: ");
    scanf("%i", &valor1);
    
    printf("Digite o 2º valor: ");
    scanf("%i", &valor2);
    
    printf("Digite o 3º valor: ");
    scanf("%i", &valor3);

    soma_quadrados = (valor1*valor1) + (valor2*valor2) + (valor3*valor3);

    printf("\nA soma dos quadrados dos valores inseridos é %i\n\n", soma_quadrados);
    
    return 0;
}