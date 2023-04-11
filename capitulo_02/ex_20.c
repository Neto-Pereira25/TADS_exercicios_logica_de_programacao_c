#include <stdio.h>

int main(){
    
    float lado_1, lado_2, lado_3;
    
    printf("Digite o 1º lado do triângulo: ");
    scanf("%f", &lado_1);

    printf("Digite o 2º lado do triângulo: ");
    scanf("%f", &lado_2);

    printf("Digite o 3º lado do triângulo: ");
    scanf("%f", &lado_3);

    if (lado_1 > (lado_2 + lado_3)){
        printf("Infelizmente, você não informou um triângulo");
    } else if (lado_2 > (lado_1 + lado_3)){
        printf("Infelizmente, você não informou um triângulo");
    } else if (lado_3 > (lado_2 + lado_1)){
        printf("Infelizmente, você não informou um triângulo");
    } else {
        if(lado_1 == lado_2 && lado_1 == lado_3){
            printf("O triângulo é equilátero");
        } else if(lado_1 == lado_2 || lado_2 == lado_3 || lado_1 == lado_3){
            printf("O triângulo é isósceles");
        } else if(lado_1 != lado_2 && lado_1 != lado_3 && lado_2 != lado_3){
            printf("O triângulo é escaleno");
        }
    }
    
    return 0;
}