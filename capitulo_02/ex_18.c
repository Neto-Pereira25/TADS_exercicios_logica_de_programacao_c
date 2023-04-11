// Calcular a raiz quadrada de um número qualquer
// #include <stdio.h>

// float raiz_quadrada(float numero);

// int main(int argc, char **argv){

//     float num;

//     printf("Digite um número: ");
//     scanf("%f", &num);
    
//     printf("A raiz quadrada de %.3f é = %.5f\n", num, raiz_quadrada(num));

//     return 0;
// }

// float raiz_quadrada (float numero)
// {
//     int n;
//     float recorre = numero;
    
//     for (n = 0; n < 10; ++n){
//           recorre = recorre/2 + numero/(2*recorre);
//     }
//     return(recorre);    
// } 
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

        resultado = num1 - num2;
        printf("%.2f - %.2f = %2.f\n", num1, num2, resultado);

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

        resultado = num1 / num2;
        printf("%.2f / %.2f = %2.f\n", num1, num2, resultado);

    } else {
        printf("Digite uma operação válida!!!");
    }

    return 0;
}