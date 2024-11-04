#include <stdio.h>
int main() {

  int num[3][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
  };
  int *ptr = &num[0][0];

  for (int lin = 0; lin < 3; lin++) {
    for (int col = 0; col < 4; col++) {
      printf("num[%d][%d]: %d\n", lin + 1, col + 1, num[lin][col]);
    }
  }

  printf("\n");
  /*
  printf("Linha 1: %i |  %i |  %i |  %i\n", *ptr, *(ptr+1), *(ptr+2), *(ptr+3));
  printf("Linha 2: %i |  %i |  %i |  %i\n", *(ptr+4), *(ptr+5), *(ptr+6),
  *(ptr+7)); printf("Linha 3: %i | %i | %i | %i\n", *(ptr+8), *(ptr+9),
  *(ptr+10), *(ptr+11)); printf("\n");
  */

  /*
  printf("\n");
  printf("Linha 1: %i |  %i |  %i |  %i\n", *ptr, zero, *(ptr+2), zero);
  printf("Linha 2: %i |  %i |  %i |  %i\n", *(ptr+4), zero, *(ptr+6), zero);
  printf("Linha 3: %i |  %i | %i |  %i\n", *(ptr+8), zero, *(ptr+10), zero);
  */

  int tamanho = 3 * 4;
  for (int i = 0; i < tamanho; i++) {
    if (*ptr % 2 == 0) {
      *ptr = 0;
    }
    ptr++;
  }

  printf("Matriz modificada:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", num[i][j]);
    }
    printf("\n");
  }

  return 0;
}