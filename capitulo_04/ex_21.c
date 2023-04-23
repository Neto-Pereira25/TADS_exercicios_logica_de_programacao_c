#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor_A[10];
    int vetor_B[10];
    int vetor_C[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o %io valor: ", (i+1));
        scanf("%i", &vetor_A[i]);
    }

    //system("clear");

    for(int i = 0; i < 10; i++){
        printf("Digite o %io valor: ", (i+1));
        scanf("%i", &vetor_B[i]);
    }

    for(int i = 0; i < 10; i++){
        
       vetor_C[i] = vetor_A[i] - vetor_B[i];
       printf("%io elemento do vetor C = %i\n", (i+1), vetor_C[i]);
    }

    return 0;
}