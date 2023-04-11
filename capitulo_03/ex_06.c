#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int valores[10], soma = 0;
    float media;
    
    for(int i = 0; i < 10; i++){
        printf("Digite o %i valor: ", (i+1));
        scanf("%i", &valores[i]);
        if(valores[i] < 0){
            i--;
            continue;
        }
        soma += valores[i];
        if(i == 9){
            system("cls");
            printf("Quantidade de Notas = %i\n", (i+1));
            media = (float) soma / (i+1);
        }
    }

    printf("Soma = %i\n", soma);
    printf("Media = %.2f\n\n", media);
    
    return 0;
}