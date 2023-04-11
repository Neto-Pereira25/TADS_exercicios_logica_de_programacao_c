#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int valores[10], soma = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite o %iº valor: ", (i+1));
        scanf("%i", &valores[i]);
        soma += valores[i];
    }

    system("clear");

    printf("Soma = %i\n\n", soma);
    
    return 0;
}