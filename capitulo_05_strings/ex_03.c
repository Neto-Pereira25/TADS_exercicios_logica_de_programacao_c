#include <stdio.h>

int compararStrings(char vetor1[], char vetor2[]){
    int ehIgual = 0;

    for(int i = 0; (vetor1[i] != '\0' && vetor2[i] != '\0'); i++){
        if(vetor1[i] != vetor2[i]){
            ehIgual = 1;
            break;
        }
    }
    return ehIgual;
}

int main(){

    char palavra1[100], palavra2[100];
    int igual = 0;

    printf("\nDigite a primeira palavra: ");
    fgets(palavra1, 100, stdin);

    printf("\n");

    printf("Digite a segunda palavra: ");
    fgets(palavra2, 100, stdin);

    igual = compararStrings(palavra1, palavra2);

    if(igual){
        printf("\nAs strings NAO sao iguais\n\n");
    } else {
        printf("\nAs strings SAO iguais\n\n");
    }

    return 0;
}