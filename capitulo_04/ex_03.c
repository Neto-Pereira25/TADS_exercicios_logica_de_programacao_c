#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor_numeros[10];
    int vetor_quadrado[10];

    for(int i = 0; i < 10; i++){
        printf("Digite %io valor: ", (i+1));
        scanf("%i", &vetor_numeros[i]);
    }

    for(int i = 0; i < 10; i++){
        vetor_quadrado[i] = vetor_numeros[i] * vetor_numeros[i];
    }

    for(int i = 0; i < 10; i++){
        printf("%io numero digitado = %i\n", (i+1), vetor_numeros[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < 10; i++){
        printf("O quadrado do %io numero digitado = %i\n", (i+1), vetor_quadrado[i]);
    }


    return 0;
}