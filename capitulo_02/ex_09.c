#include <stdio.h>

int main(){
    
    float salario, prestacao;

    printf("Informe o salário do funcionário: ");
    scanf("%f", &salario); 

    printf("Informe o valor da prestação: ");
    scanf("%f", &prestacao);

    if(prestacao > 1.2*salario){
        printf("Empréstimo não concedido");
    } else {
        printf("Empréstimo concedido");
    }
    
    return 0;
}
