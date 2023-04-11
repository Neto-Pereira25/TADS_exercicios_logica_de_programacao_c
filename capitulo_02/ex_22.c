#include <stdio.h>

int main(void){
    
    int idade, tempo_servico;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    printf("Digite seu tempo de serviço: ");
    scanf("%i", &tempo_servico);

    if(idade >= 65 || (tempo_servico >= 30) ||
    (idade >= 60 && tempo_servico >= 25)){
        printf("\nVoce pode se aposentar!\n\n");
    } else {
        printf("\nVoce nao pode se aposentar!\n\n");
    }
    
    return 0;
}