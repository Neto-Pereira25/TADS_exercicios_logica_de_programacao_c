#include <stdio.h>

int main()
{

    int valor_inicio, segundos, minutos, horas;
    int termino, horario_final;
    int segundos_final, minutos_final, horas_final;
    float duracao;

    printf("Digite um horário de inicio\n");
    printf("Hora: ");
    scanf("%i", &horas);
    printf("Minutos: ");
    scanf("%i", &minutos);
    printf("Segundos: ");
    scanf("%i", &segundos);

    valor_inicio = horas*3600 + minutos*60 + segundos;
    
    printf("Digite um valor da duração em horas: ");
    scanf("%f", &duracao);

    termino = duracao*3600 + valor_inicio;

    horas_final = termino/3600;
    minutos_final = (termino - horas_final*3600)/60;
    segundos_final = termino - horas_final*3600 - minutos_final*60;

    printf("\nO horário de início foi\n");
    printf("%i horas %i minutos %i segundos\n", horas, minutos, segundos);

    printf("\nO horário de termino foi\n");
    printf("%i horas %i minutos %i segundos\n\n", horas_final, minutos_final, segundos_final);

    return 0;
}