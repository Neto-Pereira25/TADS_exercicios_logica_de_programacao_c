#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, vetor[10], vetor_impares[10];
    
    printf("\n");
    
    for(int i = 0; i < 10; i++){
        do{
            printf("Digite o %io numero positivo: ", (i+1));
            scanf("%i", &numero);

            if(numero < 0 || numero > 50){
                system("clear");
                printf("Numero Invalido!!!\n");
            }

        } while (numero < 0 || numero > 50);
        vetor[i] = numero;
    }

    printf("\n");
    
    for(int i = 0; i < 10; i++){
        if((vetor[i] % 2) != 0){
            vetor_impares[i] = vetor[i];
        } else {
            vetor_impares[i] = 1;
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%io Vetor Normal = %i\t%io Vetor Impar = %i\n",
        (i+1), vetor[i], (i+1), vetor_impares[i]);
    }
    
    printf("\n");

    return 0;
}