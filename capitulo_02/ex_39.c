#include <stdio.h>
#include <stdlib.h>

int main(void){

    float salario_atual, novo_salario, aumento, bonus;
    int tempo_servico;

    printf("Digite seu salario: ");
    scanf("%f", &salario_atual);

    printf("Digite o tempo de servico: ");
    scanf("%i", &tempo_servico);

    system("cls");

    if(salario_atual > 0 && salario_atual <= 500){
        aumento = salario_atual*0.25;
    } else if(salario_atual > 500 && salario_atual <= 1000){
        aumento = salario_atual*0.2;
    } else if(salario_atual > 1000 && salario_atual <= 1500){
        aumento = salario_atual*0.15;
    } else if(salario_atual > 1500 && salario_atual <= 2000){
        aumento = salario_atual*0.1;
    } else if(salario_atual > 2000){
        aumento = 0;
    }

    if(tempo_servico >= 0 && tempo_servico < 1){
        bonus = 0.00;
    } else if(tempo_servico >= 1 && tempo_servico <= 3){
        bonus = 100.00;
    } else if(tempo_servico >= 4 && tempo_servico <= 6){
        bonus = 200.00;
    } else if(tempo_servico >= 7 && tempo_servico <= 10){
        bonus = 300.00;
    } else if(tempo_servico > 10){
        bonus = 500.00;
    }

    novo_salario = salario_atual + aumento + bonus;

    printf("\nNovo salario = %.2f\n\n", novo_salario);

    return 0;
}