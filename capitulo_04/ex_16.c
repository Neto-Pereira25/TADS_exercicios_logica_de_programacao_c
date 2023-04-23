#include <stdio.h>
#include <stdlib.h>

int main(){

    float vetor[5];
    
    for(int i = 0; i < 5; i++){
        printf("Digite o %iº valor: ", (i+1));
        scanf("%f", &vetor[i]);
    }
    
    int codigo;
    
    do{
        printf("Escolha uma das opcoes: \n");
        printf("1 - Ordem Direta\n");
        printf("2 - Ordem Inversa\n");
        printf("0 - Sair\n");
        printf("Digite o codigo: ");
        scanf("%i", &codigo);
        
        if(codigo == 1){
            system("clear");
            for(int i = 0; i < 5; i++){
                printf("%.1f ", vetor[i]);
            }
            printf("\n");
        } else if(codigo == 2){
            system("clear");
            for(int i = 4; i >= 0; i--){
                printf("%.1f ", vetor[i]);
            }
            printf("\n");
        } else if(codigo == 0){
            printf("\n");
            printf("Programa Encerrado!!!\n\n");
        } else {
            system("clear");
            printf("Codigo Invalido!!!\n\n");
        }
        
    }while(codigo != 0);

    return 0;
}