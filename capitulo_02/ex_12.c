#include <stdio.h>
#include <math.h>

int main(void){
    
    int numero;
    float logaritmo;

    printf("Digite um número: ");
    scanf("%i", &numero);

    if(numero > 0){
        logaritmo = log10(numero);
        printf("Logaritmo = %.2f", logaritmo);
    } else {
        printf("Número inválido");
    }
    
    return 0;
}