#include <stdio.h>
#include <stdlib.h>

int main(){

    int extremo_inferior, extremo_superior;
    int qtd_divisores, qtd_primos = 0;
    int soma = 0;
    
    do{
        printf("Digite o numero do extremo inferior: ");
        scanf("%i", &extremo_inferior);
        if(extremo_inferior < 0){
            system("cls");
            printf("Digite um numero maior que 0\n");
        }
    }while(extremo_inferior < 0);
    
    do{
        printf("Digite o numero do extremo superior: ");
        scanf("%i", &extremo_superior);
        if(extremo_superior < 0){
            system("cls");
            printf("Digite um numero maior que 0\n");
        }
    }while(extremo_superior < 0);

    printf("\n");

    for(int i = extremo_inferior; i <= extremo_superior; i++){
        qtd_divisores = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                qtd_divisores += 1;
            }
        }
        if(qtd_divisores == 2){
            soma += i;
            qtd_primos++;
            printf("%i - ", i);
        }
    }

    printf("-> %i\n", soma);

    printf("\nO intervalor %i |-| %i tem %i numeros primos\n\n",
    extremo_inferior, extremo_superior, qtd_primos);

    return 0;
}