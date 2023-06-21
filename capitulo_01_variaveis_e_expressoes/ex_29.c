#include <stdio.h>

int main()
{

    float nota1, nota2, nota3, nota4, media;

    printf("Informe a 1ª nota: ");
    scanf("%f", &nota1);

    printf("Informe a 2ª nota: ");
    scanf("%f", &nota2);

    printf("Informe a 3ª nota: ");
    scanf("%f", &nota3);

    printf("Informe a 4ª nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;

    printf("A media do aluno é %.2f", media);

    return 0;
}