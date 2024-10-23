#include <stdio.h>

int main(void) {

  int num[3][4] = {
      {1,  2,  3,  4},
      {5,  6,  7,  8},
      {9, 10, 11, 12},
  };

  for (int lin = 0; lin < 3; lin++) {
    for (int col = 0; col < 4; col++) {
      printf("num[%d][%d]: %d\n", lin+1, col+1, num[lin][col]);
    }
  }

printf("\n");
  
  for (int lin = 0; lin < 3; lin++) {
    for (int col = 0; col < 4; col++) {
      printf("num[%d][%d]: %p\n", lin+1, col+1, &num[lin][col]);
    }
  }

  return 0;
}