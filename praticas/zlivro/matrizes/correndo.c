#include <stdio.h>
int main(void) {
  int i, j;
  int tamanho = 10;
  for (i = 0; i < tamanho; i++) {
    printf("\n");
    for (j = 0; j < tamanho; j++) {
      if (i==j) {
        printf(" X ");
      } else if (i+j == tamanho - 1) {
        printf(" 1 ");
      }
      else {
        printf(" 0 ");
      }
    }
  }
  printf("\n");
  return 0;
}