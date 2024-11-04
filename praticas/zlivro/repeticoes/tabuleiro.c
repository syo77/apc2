#include <stdio.h>
int main() {
  int lin, col, n;
  printf("\n Qual o tamanho do tabuleiro? ");
  int deucerto = scanf("%d", &n);
  for (lin = 1; lin <= n; lin++) {
    printf("\n");
    for (col = 1; col <= n; col++) {
      if ((lin + col) % 2 == 0) {
        printf("A");
      } else {
        printf("x");
      }
    }
  }
  printf("\n");
  getchar();
  return 0;
}