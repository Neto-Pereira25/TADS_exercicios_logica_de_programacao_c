#include <stdio.h>
#include <stdlib.h>

int main(){

    int milhar, cent, dezena, unidade;
    int menor_ordem, maior_ordem, soma_das_ordens = 0;

    printf("\n");

    for(int i = 1000; i <= 9999; i++){
        milhar = i / 1000;
        cent = (i - milhar*1000)/100;
        dezena = (i - milhar*1000 - cent*100)/10;
        unidade = i - milhar*1000 - cent*100 - dezena*10;
        
        maior_ordem = milhar*10 + cent;
        menor_ordem = dezena*10 + unidade;
        soma_das_ordens = maior_ordem + menor_ordem;

        if(soma_das_ordens*soma_das_ordens == i){
            printf("%i possui a propriedade\n", i);
        }
    }
    printf("\n");

    return 0;
}