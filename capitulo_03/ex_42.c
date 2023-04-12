#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int numero, quadrado, cubo;
    float raiz;
    
    do{
        printf("Digite um numero: ");
        scanf("%i", &numero);

        quadrado = numero * numero;
        cubo = numero * numero * numero;
        raiz = sqrt(numero);

        if(numero <= 0){
            printf("O programa encerrou");
        } else if(numero > 0){
            printf("\nO quadrado de %i eh %i\n", numero, quadrado);
            printf("O cubo de %i eh %i\n", numero, cubo);
            printf("A raiz de %i eh %.2f\n\n", numero, raiz);
        } else {
            printf("O programa encerrou");
            break;
        }

    } while (numero > 0);
    

    return 0;
}