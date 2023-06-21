#include <stdio.h>

int main()
{

    float primeiro, segundo, terceiro;

    primeiro = 780000 * 0.46;
    segundo = 780000 * 0.32;
    terceiro = 780000 - primeiro - segundo;

    printf("O primeiro ganhou %.2f\n", primeiro);
    printf("O segundo ganhou %.2f\n", segundo);
    printf("O terceiro ganhou %.2f\n", terceiro);

    return 0;
}