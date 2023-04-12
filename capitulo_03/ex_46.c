#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    
    int numero, chute, qtd_chutes = 0;

    numero = rand() % 1000 + 1;
    
    system("cls");
    
    while (chute != numero){
        printf("Digite seu chute: ");
        scanf("%i", &chute);
        
        qtd_chutes++;
        
        if(chute < numero){
            system("cls");
            printf("Chute um numero mais alto!!!\n");
        } else if(chute > numero){
            system("cls");
            printf("Chute um numero mais baixo!!!\n");
        }
    }
    
    printf("Fim do Jogo!!!\n");
    printf("Voce precisou de %i tentativas para acertar!!!\n\n", qtd_chutes);

    return 0;
}