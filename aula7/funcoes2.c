#include <stdio.h>

void imprimir5x() {
  printf("imprimir5x:\n");
  for(int i = 0; i < 5; i++) {
    printf("*");
  }
  printf("\n");
}

void imprimirNx(int n) {
  if(n < 0) return; /* exceção */
  for(int i = 0; i < n; i++) {
    printf("*");
  }
}

int main() {
  
imprimir5x();

imprimirNx(2);
printf("\n");

  return 0;
}