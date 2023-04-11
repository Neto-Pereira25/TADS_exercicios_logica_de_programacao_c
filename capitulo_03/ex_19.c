#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int numero;

    do{
        printf("Digite um numero entre 100 e 999: ");
        scanf("%i", &numero);
        if(numero < 100 || numero > 999){
            system("cls");
            printf("Numero invalido!!!\n");
        }
    } while (numero < 100 || numero > 999);
    
    int unidade, dezena, centena;
    unidade = numero % 10;
    dezena = (numero / 10) % 10;
    centena = numero / 100;
    
    printf("\nO numero digitado %i e composto por:\n", numero);
    printf("%i centenas\n", centena);
    printf("%i dezenas\n", dezena);
    printf("%i unidades\n\n", unidade);

    return 0;
}