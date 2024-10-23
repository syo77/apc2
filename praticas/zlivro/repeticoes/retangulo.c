#include <stdio.h>
int main (void) {
  
  int altura;
  int largura;

  printf("Digite a altura do retângulo: ");
  int deucerto = scanf("%d", &altura);

  printf("Digite a largura do retângulo: ");
  deucerto = scanf("%d", &largura);

  for (int i = 1; i <= altura; i++) {
    printf("\n");
    for(int j = 1; j <= largura; j++) {
      if((i+j)%2==0) {
        printf("X");
      } else {
        printf("7");
      }
    }
  }
  printf("\n");
  getchar();

  return 0;
}