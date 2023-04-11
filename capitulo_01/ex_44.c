#include <stdio.h>

int main()
{

    float altura_degrau, altura_usuario;
    int qtd_degraus;

    printf("Informe a altura do degrau em cm: ");
    scanf("%f", &altura_degrau);

    printf("Informe a altura em cm que o usuário deseja alcançar: ");
    scanf("%f", &altura_usuario);

    qtd_degraus = altura_usuario / altura_degrau;

    printf("O usuário precisará subir %i degraus\n\n", qtd_degraus);

    return 0;
}