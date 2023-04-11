#include <stdio.h>
#include <stdlib.h>

int main(void){

    float nota;
    int qtd_faltas;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    
    // Verificando Validade da nota
    if(nota >= 0 && nota <= 10){
        
        printf("Digite a quantidade de faltas do aluno: ");
        scanf("%i", &qtd_faltas);
        
        // Verificando Validade da Quantidade de Faltas
        if(qtd_faltas < 0){
            printf("Quantidade inválida!!!\n\n");
        } else {
            // Faltas até 20
            system("cls");
            if(qtd_faltas <= 20){
                if(nota >= 0 && nota < 4){
                    printf("\nCONCEITO E\n\n");
                } else if(nota >= 4 && nota < 5){
                    printf("\nCONCEITO D\n\n");
                } else if(nota >= 5 && nota < 7.5){
                    printf("\nCONCEITO C\n\n");
                } else if(nota >= 7.5 && nota < 9){
                    printf("\nCONCEITO B\n\n");
                } else if(nota >= 9 && nota <= 10){
                    printf("\nCONCEITO A\n\n");
                } 
            // Faltas maior que 20
            } else {
                if(nota >= 0 && nota < 4){
                    printf("\nCONCEITO E\n\n");
                } else if(nota >= 4 && nota < 5){
                    printf("\nCONCEITO E\n\n");
                } else if(nota >= 5 && nota < 7.5){
                    printf("\nCONCEITO D\n\n");
                } else if(nota >= 7.5 && nota < 9){
                    printf("\nCONCEITO C\n\n");
                } else if(nota >= 9 && nota <= 10){
                    printf("\nCONCEITO B\n\n");
                } 
            }
        }

    } else {
        printf("Nota inválida!!!\n\n");
    }
    



    return 0;
}