#include <stdio.h>

int main(){

    float nota1, nota2, nota3, media;
    int peso1 = 2, peso2 = 3, peso3 = 5;

    printf("Digite a 1ª nota (Trabalho de Laboratório): ");
    scanf("%f", &nota1);

    printf("Digite a 2ª nota (Avaliação Semestral): ");
    scanf("%f", &nota2);

    printf("Digite a 3ª nota (Exame Final): ");
    scanf("%f", &nota3);

    media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1+peso2+peso3);

    if (media >=0 && media <= 2.9) {
        printf("A média é %.2f e o aluno está reprovado!", media);
    } else if (media >= 3 && media <= 4.9) {
        printf("A média é %.2f e o aluno está em recuperação!", media);
    } else {
        printf("A média é %.2f e o aluno está aprovado!", media);
    }
    

    return 0;
}