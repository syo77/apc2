#include <stdio.h>
int main (void) {

int num, contador, res;

printf("Insira uma tabuada desejada: ");
  int deucerto = scanf("%d", &num);

  for(contador = 1; contador <= 10; contador++) {
    res = num*contador;
    printf("%d x %d = %d\n", num, contador, res);
  }

  return 0;
}