#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    float altura, peso;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    
    system("cls");

    if((altura < 1.2 && peso <= 60)){
        printf("Voce esta na categoria A\n\n");

    } else if((altura < 1.2 && (peso > 60 && peso <= 90))){
        printf("Voce esta na categoria D\n\n");

    } else if((altura < 1.2 && peso > 90)){
        printf("Voce esta na categoria G\n\n");

    } else if(((altura >= 1.2 && altura < 1.7) && peso <= 60)){
        printf("Voce esta na categoria B\n\n");

    } else if(((altura >= 1.2 && altura < 1.7) && (peso > 60 && peso <= 90))){
        printf("Voce esta na categoria E\n\n");

    } else if(((altura >= 1.2 && altura < 1.7) && peso > 90)){
        printf("Voce esta na categoria H\n\n");

    } else if(((altura > 1.7) && peso <= 60)){
        printf("Voce esta na categoria C\n\n");

    } else if(((altura > 1.7) && (peso > 60 && peso <= 90))){
        printf("Voce esta na categoria F\n\n");

    } else if(((altura > 1.7) && peso > 90)){
        printf("Voce esta na categoria I\n\n");

    }

    return 0;
}