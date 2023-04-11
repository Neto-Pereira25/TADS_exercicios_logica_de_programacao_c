#include <stdio.h>
#include <math.h>

int main(){
    float numero, raiz_quadrada;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if(numero >= 0){
        raiz_quadrada = sqrt(numero);
        printf("A raiz do número (%.2f) é %.2f", numero, raiz_quadrada);
    } else {
        printf("O número (%.2f) ao quadrado é %.2f", numero, pow(numero, 2));
    }

}