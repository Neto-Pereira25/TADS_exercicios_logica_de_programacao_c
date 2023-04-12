#include <stdio.h>

int main()
{

    float peso, altura, imc;
    
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5){
        printf("Seu imc é %0.2f e você está abaixo do peso", imc);
    } else if(imc >= 18.5 && imc < 24.9){
        printf("Seu imc é %0.2f e você está com o peso adequado", imc);
    } else if(imc >= 24.9 && imc < 29){
        printf("Seu imc é %0.2f e você está com excesso de peso", imc);
    } else if(imc >= 29 && imc < 34.9){
        printf("Seu imc é %0.2f e você está com obesidade I", imc);
    } else if(imc >= 34.9 && imc < 39.9){
        printf("Seu imc é %0.2f e você está com obesidade II", imc);
    } else {
        printf("Seu imc é %0.2f e você está com obesidade III", imc);
    }

    return 0;
}