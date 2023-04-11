#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int valores[10], soma = 0, qtd_numeros = 1;
    float media;
    


    while (qtd_numeros <= 10){
        //Pedindo Número ao Usuário
        printf("\nDigite o %i valor: ", (qtd_numeros));
        scanf("%i", &valores[qtd_numeros]);
        
        //Verificando se o número é negativo
        if(valores[qtd_numeros] < 0){
            system("cls");
            printf("Digite um valor positivo!!!");
            continue;
        } else {
            soma += valores[qtd_numeros];
            if(qtd_numeros == 10){
                system("cls");
                printf("Quantidade de Notas = %i\n", (qtd_numeros));
                media = (float) soma / (qtd_numeros);
            }
            qtd_numeros++;
        } 
    }

    printf("Soma = %i\n", soma);
    printf("Media = %.2f\n\n", media);
    
    return 0;
}