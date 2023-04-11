#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int soma = 0;
    
    for(int i = 0; i < 100; i++){
        if(i % 2 == 0){
            printf("%i\n", i);
            soma += i;
        }
    }

    printf("\nSoma = %i\n\n", soma);
    
    return 0;
}