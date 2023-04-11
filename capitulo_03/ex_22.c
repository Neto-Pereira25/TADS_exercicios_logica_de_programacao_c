#include <stdio.h>
#include <stdlib.h>

int main(){

    float notas, media, soma = 0, qtd_notas = 1;

    while (1) {
        printf("Digite uma nota entre 10 e 20: ");
        scanf("%f", &notas);

        if(notas < 10 || notas > 20){
            break;
        }

        soma += notas;

        media = soma / qtd_notas;

        qtd_notas++;
    }

    printf("A media do usuario eh = %.2f\n\n", media);

    return 0;
}