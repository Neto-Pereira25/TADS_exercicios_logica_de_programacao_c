#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int termo_sequencia, primeiro_termo = 0, segundo_termo = 1,
    proximo_termo;
    
    do{
        printf("Digite quantos termos da sequencia voce deseja ver: ");
        scanf("%i", &termo_sequencia);
    
        if(termo_sequencia < 1){
            system("clear");
            printf("Digite um valor maior que ZERO!!!\n");
        }
    }while(termo_sequencia < 1);

    if(termo_sequencia == 1){
        printf("%i ", primeiro_termo);
    } else if(termo_sequencia == 2){
        printf("0 1 ");
    } else {
        printf("0 1 ");

        for(int i = 1; i <= termo_sequencia - 2; i++){
            proximo_termo = primeiro_termo + segundo_termo;
            primeiro_termo = segundo_termo;
            segundo_termo = proximo_termo;
            printf("%i ", proximo_termo);
        }
    }

    return 0;
}