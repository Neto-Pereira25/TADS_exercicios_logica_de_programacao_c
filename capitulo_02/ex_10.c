#include <stdio.h>

int main(){
    
    float altura, peso_ideal;
    char sexo;

    printf("Digite o sexo da pessoa: ");
    scanf("%c", &sexo);

    if(sexo == 'm' || sexo == 'M'){
        printf("Digite a altura: ");
        scanf("%f", &altura);
        peso_ideal = (72.7*altura) - 58;
        printf("O seu peso ideal é %.2f\n", peso_ideal);
    } else if (sexo == 'f' || sexo == 'F'){
        printf("Digite a altura: ");
        scanf("%f", &altura);
        peso_ideal = (62.1*altura) - 44.7;
        printf("O seu peso ideal é %.2f\n", peso_ideal);
    } else {
        printf("Sexo inválido!!!");
    }
    
    
    return 0;
}