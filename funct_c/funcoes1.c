#include <stdio.h>

void imprimir_ch1(int n, char q) {
  if(n < 0) return; // exceção
  for(int i = 0; i < n; i++) {
    printf("%c", q);
  }
}

void imprimir_meia_arvore(int n, int q) {
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
      printf("%c", q);
    }
    printf("\n");
  }
}

int main(void) {

imprimir_ch1(5, '#');
printf("\n");

imprimir_meia_arvore(5, '*');
printf("\n");

  return 0;
}





