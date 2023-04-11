#include <stdio.h>

int main(){
    
    float area, base_maior, base_menor, altura;

    printf("Digite a base maior: ");
    scanf("%f", &base_maior);
    if(base_maior > 0){
        printf("Digite a base menor: ");
        scanf("%f", &base_menor);

        if(base_menor > 0){
            printf("Digite a altura: ");
            scanf("%f", &altura);

            if(altura > 0){
                area = ((base_maior + base_menor)*altura)/2;

                printf("A área do trapézio é: %.2f", area);

            }else {
                printf("Digite um valor positivo");
            }
        } else {
            printf("Digite um valor positivo");
        }
    } else {
        printf("Digite um valor positivo");
    }

    return 0;
}