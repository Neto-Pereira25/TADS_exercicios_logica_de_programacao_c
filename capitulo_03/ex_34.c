#include <stdio.h>
#include <stdlib.h>

int main(){

    int condicao = 1, menor_divisor;
    menor_divisor = 21;
    
    while (condicao){
        
        condicao = (
            (menor_divisor % 1 == 0) &&
            (menor_divisor % 2 == 0) &&
            (menor_divisor % 3 == 0) &&
            (menor_divisor % 4 == 0) &&
            (menor_divisor % 5 == 0) &&
            (menor_divisor % 6 == 0) &&
            (menor_divisor % 7 == 0) &&
            (menor_divisor % 8 == 0) &&
            (menor_divisor % 9 == 0) &&
            (menor_divisor % 10 == 0) && // 2520
            (menor_divisor % 11 == 0) && // 27 720
            (menor_divisor % 12 == 0) && // 27 720
            (menor_divisor % 13 == 0) && // 360 360
            (menor_divisor % 14 == 0) && // 360 360
            (menor_divisor % 15 == 0) && // 360 360
            (menor_divisor % 16 == 0) && // 5 765 760
            (menor_divisor % 17 == 0) && // 98 017 920
            (menor_divisor % 18 == 0) && // 98 017 920
            (menor_divisor % 19 == 0) && // 1 862 340 480
            (menor_divisor % 20 == 0) // 1 862 340 480
        );

        if(condicao){
            printf("O menor numero divisivel eh %i\n", menor_divisor); // 1 862 340 480
            break;
        } else {
        printf("%i -> nao eh\n", menor_divisor);
        menor_divisor++;
        condicao = 1;
        }
    }
    printf("Condicao = %i\n", condicao);

    return 0;
}