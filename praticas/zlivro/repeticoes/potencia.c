#include <stdio.h>
#include <math.h>
int main (void) {

  float x;
  int n;

  printf("Entre com a base: ");
  int deucerto = scanf("%f", &x);

  printf("Entre com o expoente: ");
  deucerto = scanf("%d", &n);

  printf("%.1f elevado a %dª potência é igual a: %.1f\n", x, n, pow(x, n)); // pow é a função para fazer potência entre uma variável e outra, x é a base, n é o expoente.

  return 0;
}