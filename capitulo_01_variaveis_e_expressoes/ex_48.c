#include <stdio.h>

int main()
{

    int valor, segundos, minutos, horas;
    
    printf("Digite um valor em segundos: ");
    scanf("%i", &valor);

    horas = valor/3600; // Ou divide por 3600;
    minutos = (valor - horas*3600)/60;
    segundos = valor - horas*3600 - minutos*60;

    printf("\nO valor digitado %i equivale a: ", valor);
    printf("%i horas %i minutos e %i segundos\n\n", horas, minutos, segundos);


    return 0;
}