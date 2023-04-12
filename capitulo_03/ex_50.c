#include <stdio.h>
#include <stdlib.h>

int main(){

    float altura_chico = 1.5, crescimento_chico = 0.02;
    float altura_ze = 1.1, crescimento_ze = 0.03;
    int anos = 0;

    while (altura_chico >= altura_ze){
        anos++;
        altura_chico += crescimento_chico;
        altura_ze += crescimento_ze;
        printf("Ano %i\n", anos);
        printf("\tAltura Chico = %.2f\n", altura_chico);
        printf("\tAltura Ze = %.2f\n", altura_ze);
    }

    printf("\nFoi necessario %i anos\n\n", anos);


    return 0;
}