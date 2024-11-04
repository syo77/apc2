#include <stdio.h>
int main (void) {

int n;
int fatorial = 1;

  printf("Digite o número desejado: ");
  int deucerto = scanf("%d", &n);

  for (int i = n; i >= 1; i--) {
   fatorial *= i;
  }

  printf("%d! é igual a: %d\n", n, fatorial);

  return 0;
}