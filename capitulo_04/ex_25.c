#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[100];
    int qtdNaturais = 0;
    int i = 0;

    while (qtdNaturais < 100){
        if((i % 7 == 0) || (i % 10 == 7)){
            i++;
            continue;
        } else {
            vetor[i] = i;
            qtdNaturais++;
            printf("%d -> %d\n", qtdNaturais, vetor[i]);
        }
        i++;
    }
    

    return 0;
}