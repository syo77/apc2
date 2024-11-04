#include <stdio.h>
int main(void) {
  int i, j;
  for (i = 0; i < 9; i++) {
    printf("\n");
    for (j = 0; j < 9; j++)
      printf("[%d][%d] ", i, j);
  }
  return 0;
}
