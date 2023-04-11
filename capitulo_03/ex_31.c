#include <stdio.h>
#include <stdlib.h>

int main(){

    float soma = 0;

    printf("\nS = ");
    
    for (int i = 1, j = 1; i <= 50 ; i++, j += 2){
        soma += ((float)j/i);
        if(i < 50){
            printf("%i/%i + ", j, i);
        } else {
            printf("%i/%i = ", j, i);
        }
        
    }
    
    printf("%.2f\n\n", soma);

    return 0;
}