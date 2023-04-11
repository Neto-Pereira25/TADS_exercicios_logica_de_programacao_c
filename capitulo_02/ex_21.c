#include <stdio.h>

int main(){

    char operacao;
    float num1, num2, resultado;
    
    printf("============= MENU =============\n");
    printf("+ -> Soma\n");
    printf("- -> Subtração\n");
    printf("* -> Multiplicação\n");
    printf("/ -> Divisão\n");
    printf("=================================\n");
    printf("Digite um símbolo para realizar a operação: ");
    scanf("%c", &operacao);

    if(operacao == '+'){
        printf("Digite o número 1: ");
        scanf("%f", &num1);

        printf("Digite o número 2: ");
        scanf("%f", &num2);

        resultado = num1 + num2;
        printf("%.2f + %.2f = %2.f\n", num1, num2, resultado);

    } else if(operacao == '-'){
        printf("Digite o número 1: ");
        scanf("%f", &num1);

        printf("Digite o número 2: ");
        scanf("%f", &num2);

        if(num1 > num2){
            resultado = num1 - num2;
            printf("%.2f - %.2f = %2.f\n", num1, num2, resultado);
        } else if(num2 > num1){
            resultado = num2 - num1;
            printf("%.2f - %.2f = %2.f\n", num2, num1, resultado);
        } else {
            resultado = num1 - num2;
            printf("%.2f - %.2f = %2.f\n", num1, num2, resultado);
        }

    } else if(operacao == '*'){
        printf("Digite o número 1: ");
        scanf("%f", &num1);

        printf("Digite o número 2: ");
        scanf("%f", &num2);

        resultado = num1 * num2;
        printf("%.2f * %.2f = %2.f\n", num1, num2, resultado);

    } else if(operacao == '/'){
        printf("Digite o número 1: ");
        scanf("%f", &num1);

        printf("Digite o número 2: ");
        scanf("%f", &num2);

        if(num2 == 0){
            printf("O denominador não pode ser zero!");
        } else {
            resultado = num1 / num2;
            printf("%.2f / %.2f = %2.f\n", num1, num2, resultado);
        }

    } else {
        printf("Digite uma operação válida!!!");
    }

    return 0;
}