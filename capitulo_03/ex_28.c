#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, fatorial;
    float E = 0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        if(numero < 1){
            system("cls");
            printf("Digite um numero maior que 0\n");
        }
    }while(numero < 1);
    
    printf("E = ");
    
    for(int i = 0; i <= numero; i++){
        fatorial = 1;
        for(int j = 1; j <= i; j++){
            fatorial *= j;
        }
        
        E += (1.0/fatorial);
        
        if(i == 0){
            printf("1 + ");
        } else if(i < numero){
            printf("1/%d + ", fatorial);
        } else {
            printf("1/%d = %.2f\n", fatorial, E);
        }
    }

    //printf("E = %.2f\n\n", E);

    return 0;
}