#include <stdio.h>

int main(){
    int num_1, num_2;

    printf("Digite o 1º número: ");
    scanf("%i", &num_1);

    printf("Digite o 2º número: ");
    scanf("%i", &num_2);

    if(num_1 > num_2){
        printf("O 1º número (%i) é maior\n", num_1);
    } else if (num_2 > num_1){
        printf("O 2º número (%i) é maior\n", num_2);
    } else {
        printf("Os números são iguais\n");
    }
    

    return 0;
}
