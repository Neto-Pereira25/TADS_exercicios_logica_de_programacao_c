#include <stdio.h>

int main(){
    
    float consumo, fatura = 0;

    printf("Digite o consumo: ");
    scanf("%f", &consumo);
    
    if(consumo >= 0 && consumo <= 10){
        fatura = 0;
    } else if(consumo > 10 && consumo <= 20){
        fatura = 10;
    } else if(consumo >= 20 && consumo <= 30){
        fatura = 12;
    } else if(consumo > 30){
        fatura = 15;
    } else {
        printf("\nConsumo Inválido!!!\n\n");
    }

    printf("\nFatura = %.2f\n\n", fatura);

    return 0;
}