#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int soma = 0, primeiro_termo = 0, segundo_termo = 1,
    proximo_termo = 0;
    
    
        for(int i = 1; i <= 32; i++){
            proximo_termo = primeiro_termo + segundo_termo;
            primeiro_termo = segundo_termo;
            segundo_termo = proximo_termo;

            if(i >= 32){
                printf("%i = ", proximo_termo);
            } else {
                printf("%i + ", proximo_termo);
            }
            soma += proximo_termo;
        }
        printf("%i\n\n", soma);

    return 0;
}