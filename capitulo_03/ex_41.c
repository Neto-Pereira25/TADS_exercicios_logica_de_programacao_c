#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float resistor_1, resistor_2, resistencia;

    do{
      
      printf("Digite o valor do primeiro resistor: ");
      scanf("%f", &resistor_1);
      
      printf("Digite o valor do primeiro resistor: ");
      scanf("%f", &resistor_2);
      
      resistencia = resistor_1 * resistor_2 / (resistor_1 + resistor_2);
      
      printf("\nA resistencia para os resistores %.2f e %.2f = %.2f\n\n", resistor_1, resistor_2, resistencia);

    } while (resistencia != 0);
    
    return 0;
}