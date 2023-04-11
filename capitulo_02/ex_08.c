#include <stdio.h>

int main(){

    float nota_1, nota_2, soma, media;

    printf("Digite a 1ª nota: ");
    scanf("%f", &nota_1);

    if (nota_1 >= 0 && nota_1 <= 10){
        printf("Digite a 2ª nota: ");
        scanf("%f", &nota_2);

        if ((nota_2 >= 0) && (nota_2 <= 10)){
            soma = nota_1 + nota_2;
            media = soma/2;
            printf("A media do aluno é %.2f\n", media);
        } else {
            printf("Nota inválida\n\n");    
        }
    } else {
        printf("Nota inválida\n\n");
    }
    
}
