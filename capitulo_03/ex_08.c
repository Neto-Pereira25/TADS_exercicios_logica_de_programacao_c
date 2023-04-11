#include <stdio.h>
#include <stdlib.h>

int main(void){

    int numeros[10], menor = 0, maior = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite %iº número: ", (i+1));
        scanf("%i", &numeros[i]);
        
        if(i == 0){
            maior = numeros[i];
            menor = numeros[i];
        } 
        if(maior < numeros[i]){
            maior = numeros[i];
        }
        if(menor > numeros[i]){
            menor = numeros[i];
        }
    }

    system("cls");
    printf("Maior = %i\n", maior);
    printf("Menor = %i\n\n", menor);

    return 0;
}