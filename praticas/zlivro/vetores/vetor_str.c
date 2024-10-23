#include <stdio.h>
#include <stdlib.h>
int main (void) {
  
  char str[2000];
  
  printf("Digite a frase escolhida: ");
  int deucerto = scanf("%[^\n]s", str);
  system("clear");
  
  printf("%s\n", str);


  // PAGINA 60;
  return 0;
}