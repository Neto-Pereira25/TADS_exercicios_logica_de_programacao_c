#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("\n\t100 primeiros com o Ciclo FOR\n\n");
    // 100 primeiros números com o for
    for(int i = 1; i <= 100; i++){
        if(i < 100){
            printf("%i - ", i);
        } else {
            printf("%i", i);
        }
    }

    printf("\n");
    printf("\n\t100 primeiros com o Ciclo WHILE\n\n");
    // 100 primeiros números com while
    int i = 1;
    while (i <= 100){
        if(i < 100){
            printf("%i - ", i);
        } else {
            printf("%i", i);
        }
        i++;
    }
    
    printf("\n");
    printf("\n\t100 primeiros com o Ciclo DO...WHILE\n\n");
    // 100 primeiros números com do...while...
    i = 1;
    do{
        if(i < 100){
            printf("%i - ", i);
        } else {
            printf("%i", i);
        }
        i++;
    }while (i <= 100);
    
    
    
    return 0;
}