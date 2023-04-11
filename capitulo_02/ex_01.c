#include <stdio.h>

int main(){
    int numero_1, numero_2;

    printf("Digite o 1º número: ");
    scanf("%i", &numero_1);

    printf("Digite o 2º número: ");
    scanf("%i", &numero_2);

    if(numero_1 > numero_2){
        printf("O 1º número (%i) é maior", numero_1);
    } else if (numero_2 > numero_1){
        printf("O 2º número (%i) é maior", numero_2);
    } else {
        printf("Os números são iguais");
    }
    

    return 0;
}
