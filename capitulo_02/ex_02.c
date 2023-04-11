#include <stdio.h>
#include <math.h>

int main(){
    int numero;
    float raiz_quadrada;

    printf("Digite um número: ");
    scanf("%i", &numero);

    if(numero >= 0){
        raiz_quadrada = sqrt(numero);
        printf("A raiz do número (%i) é %.2f", numero, raiz_quadrada);
    } else {
        printf("O número (%i) é inválido", numero);
    }

    return 0;
}