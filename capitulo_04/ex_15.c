#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[20];

// Nao deixando o usuario inserir valores repetidos

    // for(int i = 0; i < 20; i++){
    //     printf("Digite o %io valor: ", (i+1));
    //     scanf("%i", &vetor[i]);
    //     for(int j = 0; j < i; j++){
    //         if(vetor[i] == vetor[j]){
    //             system("cls");
    //             printf("Nao digite valores repetidos\n");
    //             i--;
    //         }
    //     }
    // }

    // for(int i = 0; i < 20; i++){
    //     printf("%i\n", vetor[i]);
    // }

// Deixando o usuario inserir valores repetidos

    for(int i = 0; i < 20; i++){
        printf("Digite o %io valor: ", (i+1));
        scanf("%i", &vetor[i]);
    }

    printf("\n");

    for(int i = 0; i < 20; i++){
        for(int j = 0; j < i; j++){
            if(i == j){
                continue;
            }
            if(vetor[i] == vetor[j]){
                i++;
                continue;
            }
        }
        printf("%i\n", vetor[i]);
    }

    return 0;
}