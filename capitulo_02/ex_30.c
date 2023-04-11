#include <stdio.h>
#include <stdlib.h>

int main(void){

    int numeros[3];

    for(int i =0; i < 3; i++){
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &numeros[i]);
    }

    int aux;

    for(int i =0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(numeros[i] > numeros[j]){
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j]= aux;
            }
        }
    }

    for(int i =0; i < 3; i++){
        if(i < 2){
            printf("%i -> ", numeros[i]);
        } else {
            printf("%i", numeros[i]);
        }
    }

    return 0;
}