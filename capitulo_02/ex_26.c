#include <stdio.h>

int main(void){

    float distancia, litros, consumo;

    printf("Digite uma distancia: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);
    
    if(distancia >= 0 && litros >= 0){
        consumo = distancia / litros;
        printf("\nConsumo = %.2f\n", consumo);
        if(consumo < 8){
            printf("Venda o carro!\n");
        } else if(consumo >= 8 && consumo <= 14){
            printf("Economico!");
        } else {
            printf("Super Economico!!!\n");
        }
    } else {
        printf("Digite valores validos!!!\n");
    }
    return 0;
}