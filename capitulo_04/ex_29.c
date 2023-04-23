#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeros[6], soma = 0, qtdImpares = 0;

    for(int i = 0; i < 6; i++){
        printf("Digite o %io numero: ", (i+1));
        scanf("%i", &numeros[i]);
    }

    printf("\nNumeros pares digitados\n");

    for(int i = 0; i < 6; i++){
        if((numeros[i] % 2) == 0){
            printf("\t%i\n", numeros[i]);
            soma += numeros[i];
        }
    }

    printf("A soma dos numeros pares eh = %i\n", soma);

    printf("Numeros pares digitados\n");

    for(int i = 0; i < 6; i++){
        if((numeros[i] % 2) != 0){
            printf("\t%i\n", numeros[i]);
            qtdImpares++;
        }
    }

    printf("A quantidade de numeros impares digitados eh = %i", qtdImpares);

    return 0;
}