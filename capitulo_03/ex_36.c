#include <stdio.h>
#include <stdlib.h>

int main(){

    int soma_elementos_quadrado = 0, diferenca;
    int quadrado_da_soma = 0;

    for(int i = 1; i <= 100; i++){
        soma_elementos_quadrado += i*i;
    }

    for(int i = 1; i <= 100; i++){
        quadrado_da_soma += i;
    }

    diferenca = soma_elementos_quadrado - quadrado_da_soma*quadrado_da_soma;

    printf("\nSoma dos Quadrados = %i\n", soma_elementos_quadrado);
    printf("\nQuadrado da Soma = %i\n", quadrado_da_soma*quadrado_da_soma);
    printf("\nA diferenca eh = %i\n\n", diferenca);

    return 0;
}