#include <stdio.h>

int main()
{

    float valorDaHora, valorPago;
    int numeroDeHoras;

    printf("Informe o valor pago por hora de trabalho: ");
    scanf("%f", &valorDaHora);

    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%i", &numeroDeHoras);

    valorPago = (valorDaHora * numeroDeHoras) * 1.1;

    printf("O total a ser recebido é de: %.2f", valorPago);

    return 0;
}