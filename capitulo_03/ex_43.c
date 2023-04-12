#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int idades, qtd_idades = 0;
    float idade_media, soma_idades = 0.0;
    
    do{
        printf("Digite a %i idade: ", (qtd_idades+1));
        scanf("%i", &idades);

        if(idades <= 0 && qtd_idades == 0){
            printf("\nO programa encerrou!!!\n\n");
        } else if(idades > 0){
            soma_idades += idades;
            qtd_idades++;
            
            idade_media = soma_idades/qtd_idades;
            printf("\nA media das idades inseridas eh = %.2f\n\n",
            idade_media);
        } else if(idades <= 0){
            printf("\nO programa encerrou!!!\n\n");
            printf("\nA media das idades inseridas eh = %.2f\n\n",
            idade_media);
        } else {
            printf("\nO programa encerrou!!!\n\n");
        }

    }while(idades > 0);
    
    return 0;
}