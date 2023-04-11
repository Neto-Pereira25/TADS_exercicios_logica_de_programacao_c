#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int i = 0;
    while (i <= 100000){
        printf("%i\n", i);
        i += 1000;
    }
    
    
    return 0;
}