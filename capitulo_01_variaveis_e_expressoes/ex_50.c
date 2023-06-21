#include <stdio.h>
#include <time.h>

int main()
{
    struct tm *ano;

    time_t segundos;
    time(&segundos);
    ano = localtime(&segundos);

    int idade, ano_atual, ano_nascimento;

    ano_atual = ano -> tm_year+1900;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    ano_nascimento = ano_atual - idade;

    printf("Seu ano de nascimento: %i", ano_nascimento);

    return 0;
}