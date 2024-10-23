#include <stdio.h>
int main (void) {

  int indice;
  char letras[26] = {'a', 'b', 'c','d', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  float temperatura[6];
  int dias[32]; // considerando 31 dias cada mês do ano 
  /* char *pchar_ltr = (char*) &letras; */

  printf("Digite a posição da letra do alfabeto que deseja: ");
  int deucerto = scanf("%d", &indice);
  printf("%c\n", *letras+indice);
  
  return 0;
}