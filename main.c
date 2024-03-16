#include <stdio.h>
#include "matematica.h"
int main() {
   float angulo= 3.14654;
   printf("O cosseno de %.6f é: %.6f",angulo, calcular_cosseno(angulo)); //imprime o valor do cosseno do angulo definido na variavel angulo
   printf("\n");
   printf("O seno de %.6f é: %.6f",angulo, calcular_seno(angulo));//imprime o valor do seno do angulo definido na variavel angulo
   printf("\n");
   printf("A tangente de %.6f é:%.6f",angulo, calcular_tangente(angulo));//imprime o valor da tangente do angulo definido  na variavel angulo
   return 0;
}