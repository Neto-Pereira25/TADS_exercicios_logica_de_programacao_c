#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double salario_carlos, salario_joao, capital_c, capital_j;
    double investimento_carlos, investimento_joao;
    int qtd_meses = 0;

    printf("Digite o salario de Carlos: ");
    scanf("%lf", &salario_carlos);

    salario_joao = salario_carlos/3;
    capital_c = salario_carlos;
    capital_j = salario_joao;
    
    do{
        qtd_meses++;
        investimento_carlos = capital_c*pow(1.02, qtd_meses);
        investimento_joao = capital_j*pow(1.05, qtd_meses);
        printf("MES %i\n", qtd_meses);
        printf("\tCapital C = %lf\n", capital_c);
        printf("\tCapital J = %lf\n", capital_j);
        printf("\tMontante C = %lf\n", investimento_carlos);
        printf("\tMontante J = %lf\n", investimento_joao);
        capital_c = investimento_carlos + salario_carlos;
        capital_j = investimento_joao + salario_joao;
    } while (investimento_carlos > investimento_joao);
    
    
    printf("\nForam necessarios %i meses\n\n", qtd_meses);

    return 0;
}