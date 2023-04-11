#include <stdio.h>
#include <math.h>

int main(void){

    float a, b, c, delta;
    float raiz_1, raiz_2;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    if(a == 0){
        printf("A precisa ser diferente de zero!");
    } else{
        printf("Digite o valor de B: ");
        scanf("%f", &b);

        printf("Digite o valor de C: ");
        scanf("%f", &c);

        delta = (b*b) - 4*a*c;

        if(delta > 0){
            raiz_1 = (-b + sqrt(delta)) / (2*a);
            raiz_2 = (-b - sqrt(delta)) / (2*a);
            printf("Delta = %.2f.\nExiste 2 raizes.\n", delta);
            printf("\tRaiz 1 = %.2f\n", raiz_1);
            printf("\tRaiz 2 = %.2f\n", raiz_2);
        } else if(delta == 0){
            raiz_1 = raiz_2 = -b / (2*a);
            printf("Delta = %.2f.\nExiste apenas 1 raiz: ", delta);
            printf("%.2f", raiz_1);
        } else {
            printf("\nO delta nao possui raiz real\n");
        }
    }
    return 0;
}