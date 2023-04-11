#include <stdio.h>
#include <math.h>

int main(){
    float numero, raiz_quadrada;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if(numero >= 0){
        raiz_quadrada = sqrt(numero);
        printf("O número (%.2f) ao quadrado é %.2f\n", numero, pow(numero, 2));
        printf("A raiz do número (%.2f) é %.2f\n", numero, raiz_quadrada);
    } else {
        printf("\nDigite um número POSITIVO!\n\n");
    }

}