#include <stdio.h>

int main(void){
    
    int ano;
    printf("Digite um ano: ");
    scanf("%i", &ano);

    if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
        printf("O ano %i é bissexto");
    } else {
        printf("O ano %i não é bissexto");
    }
    
    return 0;
}