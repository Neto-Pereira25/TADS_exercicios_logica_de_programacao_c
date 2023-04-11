#include <stdio.h>
#include <math.h>

int main(void){

    int num_1, num_2, num_3;
    float media;
    char calculo;

    printf("\na) geometrica\n");
    printf("b) ponderada\n");
    printf("c) harmonica\n");
    printf("d) aritmetica\n");
    printf("Escolha uma opcao de calculo para media: ");
    scanf("%c", &calculo);

    printf("\nDigite o 1 numero: ");
    scanf("%d", &num_1);

    printf("Digite o 2 numero: ");
    scanf("%d", &num_2);

    printf("Digite o 3 numero: ");
    scanf("%d", &num_3);

    if(calculo == 'a'){
        media = cbrt(num_1*num_2*num_3);
        printf("\nMedia = %.2f\n\n", media);
    } else if(calculo == 'b'){
        media = (float)(num_1 + 2*num_2 + 3*num_3)/6;
        printf("\nMedia = %.2f\n\n", media);
    } else if(calculo == 'c'){
        media = 1/(((float)1/num_1)+((float)1/num_2)+((float)1/num_3));
        printf("\nMedia = %.2f\n\n", media);
    } else if(calculo == 'd'){
        media = (num_1 + num_2 + num_3)/3;
        printf("\nMedia = %.2f\n\n", media);
    } else {
        printf("\nCalculo invalido!!!\n\n");
    }

    return 0;
}