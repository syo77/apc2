#include <stdio.h>

// Representação de ponteiros
int main(void) {
  int x = 5;
  float pi = 3.14;
  int *ptr_x;
  ptr_x = &x;
  int *ptr_pi;
  printf("\n\nComeço da primeira parte");
  printf("\n\n&x: %p\n\nx: %d\n", &x, x);
  printf("\n\n&ptr_x: %p\n\nptr_x: %p\n\n*ptr_x: %d\n", &ptr_x, ptr_x, *ptr_x);
  printf("\n\nFinal da primeira parte");

  // Como alterar o valor de x para 7 utilizando ptr_x?
  *ptr_x = 7;
  printf("\n\nValor de x: %d (*ptr_x: %d)\n", x, *ptr_x);
  return 0;

  // aaa
}