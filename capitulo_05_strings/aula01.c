#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int tamanho;
    char palavra1[55] = "abacate";
    char palavra2[55] = "aaaaaaaaaaaaaaaaa";

    printf("\nAntes da Copia\n");
    printf("\nPalavra 1 = %s\nPalavra 2 = %s\n\n", palavra1, palavra2);

    strcpy(palavra2, palavra1);
    
    printf("\nDepois da Copia\n");
    printf("\nPalavra 1 = %s\nPalavra 2 = %s\n\n", palavra1, palavra2);

    
    return 0;
}