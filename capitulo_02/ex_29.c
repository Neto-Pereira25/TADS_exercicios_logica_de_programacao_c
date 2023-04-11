#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
    
    int num_1, num_2, soma_aluno, soma_resposta;
    int acertos = 0, erros = 0;

    for(int i = 0; i < 5; i++){
        srand(time(NULL));
        num_1 = rand() % 100;
        num_2 = rand() % 100;
        
        printf("Questao %i:\n", i+1);
        printf("Quanto e' %i + %i ? ", num_1, num_2);
        scanf("%i", &soma_aluno);

        soma_resposta = num_1 + num_2;

        if(soma_aluno == soma_resposta){
            printf("\nVoce acertou!!!\n");
            printf("A soma de %i + %i = %i\n\n", num_1, num_2, soma_resposta);
            acertos++;
        } else {
            printf("\nVoce errou!!!\n");
            printf("A soma de %i + %i = %i\n\n", num_1, num_2, soma_resposta);
            erros++;
        }
        
    }
    system("cls");
    printf("\nVoce acertou %i questoes\n", acertos);
    printf("\nVoce erros %i questoes\n\n", erros);

    return 0;
}
