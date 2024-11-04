#include <stdio.h>

void imprimir5xlinha() {
  for(int c = 0; c < 5; c++) {
    printf("*");
  }
    printf("\n");
}

void imprimir3xlinha() {
  for(int t = 0; t < 3; t++) {
    printf("*");
  }
    printf("\n");
}

void imprimir5xvarios() {
  for(int c = 0; c < 5; c++) {
    printf("*\n");
  }
}

int main () {

imprimir5xlinha();

imprimir3xlinha();

imprimir5xvarios();

  return 0;
}