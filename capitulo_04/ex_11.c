#include <stdio.h>
#include <stdlib.h>

int main(){

    float numeros[10], soma_positivos = 0;
    int qtd_negativos = 0;

    for(int i = 0; i < 10; i++){
        printf("\nDigite o %io valor: ", (i+1));
        scanf("%f", &numeros[i]);

        if(numeros[i] < 0){
            qtd_negativos++;
        } else {
            soma_positivos += numeros[i];
        }
    }

    printf("\nFora inseridos %i numeros negativos\n", qtd_negativos);
    printf("A soma dos numeros positivos inseridos foi %.2f\n\n", soma_positivos);


    return 0;
}