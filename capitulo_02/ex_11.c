#include <stdio.h>

int main() 
{
    int numero, resto, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if (numero >= 0){
        printf("A soma dos algarismo do número %i é: \n", numero);
        do
        {
            resto = numero % 10;
            printf("%i + ", resto);
            soma += resto;
            numero /= 10;
        } while (numero != 0);
        printf(" = %i\n", soma);
        
    }

    return 0;
}
