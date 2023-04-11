#include <stdio.h>

int main(){
    // crie uma condicional para trabalhar com horarios nos valores de 0 a 12

    int hora_chegada, minuto_chegada, hora_saida, minuto_saida, tempo_parque;
    int tempo_total_chegada, tempo_total_saida;
    float tarifa;

    printf("Digite a hora de chegada no parque: ");
    scanf("%i", &hora_chegada);

    printf("Digite os minutos de chegada no parque: ");
    scanf("%i", &minuto_chegada);

    printf("Digite a hora de saida: ");
    scanf("%i", &hora_saida);

    printf("Digite os minutos de saida: ");
    scanf("%i", &minuto_saida);

    if((hora_chegada >= 0 && hora_chegada <= 23) && (hora_saida >= 0 && hora_saida <= 23)){
        
        tempo_total_chegada = hora_chegada*60 + minuto_chegada;
        tempo_total_saida = hora_saida*60 + minuto_saida;

        if(tempo_total_chegada < tempo_total_saida){
            tempo_parque = tempo_total_saida - tempo_total_chegada;
            if(tempo_parque <= 60 && tempo_parque > 0){
                tarifa = 1.0;
            } else if(tempo_parque > 60 && tempo_parque <= 120){
                tarifa = 2.0;
            } else if(tempo_parque > 120 && tempo_parque <= 180){
                tarifa = 3.0 * 1.4; //5.2
            } else if(tempo_parque > 180 && tempo_parque <= 240){
                tarifa = 4.0 * 1.4; //6.6
            } else if(tempo_parque > 240){
                if(tempo_parque % 60 > 0.016){
                    tarifa = 2.0 * (tempo_parque / 60 + 1);
                } else {
                    tarifa = 2.0 * tempo_parque/60;
                }
            }
            printf("\nValor da tarifa a ser paga = %.2f R$\n\n", tarifa);
        
        } else if(tempo_total_chegada >= tempo_total_saida){ // Saiu madrugada ou Pela Manhã
            
            switch(hora_saida){
                case 0:
                    tempo_total_saida = 24*60 + minuto_saida;
                    break;
                case 1:
                    tempo_total_saida = 25*60 + minuto_saida;
                    break;
                case 2:
                    tempo_total_saida = 26*60 + minuto_saida;
                    break;
                case 3:
                    tempo_total_saida = 27*60 + minuto_saida;
                    break;
                case 4:
                    tempo_total_saida = 28*60 + minuto_saida;
                    break;
                case 5:
                    tempo_total_saida = 29*60 + minuto_saida;
                    break;
                case 6:
                    tempo_total_saida = 30*60 + minuto_saida;
                    break;
                case 7:
                    tempo_total_saida = 31*60 + minuto_saida;
                    break;
                case 8:
                    tempo_total_saida = 32*60 + minuto_saida;
                    break;
                case 9:
                    tempo_total_saida = 33*60 + minuto_saida;
                    break;
                case 10:
                    tempo_total_saida = 34*60 + minuto_saida;
                    break;
                case 11:
                    tempo_total_saida = 35*60 + minuto_saida;
                    break;
                case 12:
                    tempo_total_saida = 36*60 + minuto_saida;
                    break;
                case 13:
                    tempo_total_saida = 37*60 + minuto_saida;
                    break;
                case 14:
                    tempo_total_saida = 38*60 + minuto_saida;
                    break;
                case 15:
                    tempo_total_saida = 39*60 + minuto_saida;
                    break;
                case 16:
                    tempo_total_saida = 40*60 + minuto_saida;
                    break;
                case 17:
                    tempo_total_saida = 41*60 + minuto_saida;
                    break;
                case 18:
                    tempo_total_saida = 42*60 + minuto_saida;
                    break;
                case 19:
                    tempo_total_saida = 43*60 + minuto_saida;
                    break;
                case 20:
                    tempo_total_saida = 44*60 + minuto_saida;
                    break;
                case 21:
                    tempo_total_saida = 45*60 + minuto_saida;
                    break;
                case 22:
                    tempo_total_saida = 46*60 + minuto_saida;
                    break;
                case 23:
                    tempo_total_saida = 47*60 + minuto_saida;
                    break;
            }
            tempo_total_chegada = hora_chegada*60 + minuto_chegada;
            tempo_parque = tempo_total_saida - tempo_total_chegada;

            if(tempo_parque <= 60 && tempo_parque > 0){
                tarifa = 1.0;
            } else if(tempo_parque > 60 && tempo_parque <= 120){
                tarifa = 2.0;
            } else if(tempo_parque > 120 && tempo_parque <= 180){
                tarifa = 3.0 * 1.4; //5.2
            } else if(tempo_parque > 180 && tempo_parque <= 240){
                tarifa = 4.0 * 1.4; //6.6
            } else if(tempo_parque > 240){
                if(tempo_parque % 60 > 0.016){
                    tarifa = 2.0 * (tempo_parque / 60 + 1);
                } else {
                    tarifa = 2.0 * tempo_parque/60;
                }
            }
            printf("\nTempo Total no Parque = %i minutos\n", tempo_parque);
            printf("\nValor da tarifa a ser paga = %.2f R$\n\n", tarifa);
        }
    } else {
        printf("\nHorário inválido!!!\n\n");
    }

    return 0;
}