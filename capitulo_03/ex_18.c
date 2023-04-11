#include <stdio.h>
#include <stdlib.h>

int main(void){

    int menor = 0, maior = 0, qtd_num;

    do{
        printf("Quantos numeros vao ser lidos: ");
        scanf("%i", &qtd_num);
        if(qtd_num < 1){
            system("cls");
            printf("Digite um valor maior que Zero!!!\n");
        }
    } while (qtd_num < 1);
    
    int numeros[qtd_num], qtd_maior_lido = 1;

    for(int i = 0; i < qtd_num; i++){
        printf("Digite %i numero: ", (i+1));
        scanf("%i", &numeros[i]);
        
        if(i == 0){
            maior = numeros[i];
            menor = numeros[i];
        } 
        if(maior < numeros[i]){
            maior = numeros[i];
            qtd_maior_lido++;
        }
        if(menor > numeros[i]){
            menor = numeros[i];
        }
    }

    system("cls");
    printf("Maior = %i\n", maior);
    printf("O maior numero foi lido %i vezes\n", qtd_maior_lido);
    printf("Menor = %i\n\n", menor);

    return 0;
}