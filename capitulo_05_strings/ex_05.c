#include <stdio.h>

int lengthString(char string[], int tam){
    int qtd = 0, i = 0;

    while (string[i] != '\0'){
        if(string[i] == '\n'){
            string[i] = '\0';
        }
        i++;
    }
    i = 0;
    while (string[i] != '\0'){
        if(string[i] != ' '){
            qtd++;
        }
        i++;
    }
    return qtd;
}

int main(){
    
    char nome[100];
    int qtdCaracteres;

    printf("Digite seu nome: ");
    fgets(nome, 100, stdin);

    qtdCaracteres = lengthString(nome, 100);

    printf("\nSeu nome eh = %s\n", nome);
    printf("Seu nome tem = %d letras\n\n", qtdCaracteres);



}