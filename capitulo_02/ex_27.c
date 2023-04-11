#include <stdio.h>

int main(void){

    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("\n");
    
    if(idade >= 5 && idade <= 7){
        printf("Sua categora e' INFANTIL A\n\n");
    } else if(idade >= 8 && idade <= 10){
        printf("Sua categora e' INFANTIL B\n\n");
    } else if(idade >= 11 && idade <= 13){
        printf("Sua categora e' JUVENIL A\n\n");
    } else if(idade >= 14 && idade <= 17){
        printf("Sua categora e' JUVENIL B\n\n");
    } else if(idade >= 18){
        printf("Sua categora e' SENIOR\n\n");
    } else {
        printf("Sua idade nao se adequada a nenhuma categoria!!\n\n");
    }
    
    return 0;
}