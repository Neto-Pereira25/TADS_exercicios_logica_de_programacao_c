#include <stdio.h>

int main(){
    
    int numero;
    printf("Digite um número: ");
    scanf("%i", &numero);

    if(numero % 3 == 0 && numero % 5 ==0){
        printf("O número não pode ser divisível por 3 e 5 ao mesmo tempo\n");
    
    } else if (numero % 3 == 0) {
        printf("%i é divisível por 3\n");
    
    } else if (numero % 5 == 0) {
        printf("%i é divisível por 5\n");
    } else {
        printf("O número não é divisível nem por 3 nem por 5\n");
    }
    

    return 0;
}