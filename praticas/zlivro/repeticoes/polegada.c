#include <stdio.h>
int main (void) {

  int polegada = 1;
  float centimetros = (polegada * (2.54/2)); // divide por 2 para dar meia polegada e colocar no contador.

  float tabela;

  for(tabela = 0; tabela <= 20; tabela++) {
    printf("%.1f polegadas: %.2f\n", tabela*0.5, centimetros*tabela);
  }

  return 0;
}