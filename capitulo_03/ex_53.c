#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, triangulo_floyd = 1;

    printf("Digite um numero: ");
    scanf("%i", &numero);
    
    printf("\n");
    
    for(int i = 1; i <= numero; i++){
        for(int j = 1; j <= i; j++){
            printf("%i ", triangulo_floyd);
            triangulo_floyd++;
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}