#include <stdio.h>
#include <stdlib.h>

int main(void){

    int numero;
    
    printf("Digite um número: ");
    scanf("%i", &numero);

    printf("\nOs %i primeiros números ímpares\n\n", numero);

    for(int i = 0; i < numero*2; i++){
        if(i % 2 != 0){
            printf("%i\n", i);
        }
    }
    printf("\n");

    return 0;
}