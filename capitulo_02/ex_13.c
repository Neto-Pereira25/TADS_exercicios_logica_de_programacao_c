#include <stdio.h>

int main(void){
    
    float nota1, nota2, nota3, media;
    int peso1 = 1, peso2 = 1, peso3 = 2;

    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1);

    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2);

    printf("Digite a 3ª nota: ");
    scanf("%f", &nota3);

    media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1+peso2+peso3);

    if(media >= 60){
        printf("\nO aluno está aprovado! Sua média é %.2f\n\n", media);
    } else {
        printf("\nO aluno está reprovado! Sua média é %.2f\n\n", media);
    }
    
    return 0;
}