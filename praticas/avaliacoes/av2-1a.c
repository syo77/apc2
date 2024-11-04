/*
Dado o exemplo, tanto v[4] e *(v+4) correspondem valor 8 do índice 4, assim como &v[4] e v+4 correspondem ao endereço 0x116 do índice 4.
Sendo assim, refatore os códigos a seguir para utilizar notação de ponteiros ao invés de vetor:

a) Algoritmo que percorre um vetor de inteiros:
*/

#include <stdio.h>

int main() {
  int vet [8] = {4, 6, 3, 8, 2, 5, 9, 1};
  for (int i = 0; i < 8; i++) {
    printf("vet[%d]: %d\n", i, vet[i]);
  }

    printf("\n");

  for (int i = 0; i < 8; i++) {
    printf("*vet %d: %d\n", i, *(vet+i)); /* vet + posição i, que no caso vai ficar percorrendo no laço de repetição a mesma coisa que no exemplo de baixo; */
  }

    printf("\n");

  printf("Modo manual\n");
  printf("*vet 0: %d\n", *vet);
  printf("*vet 1: %d\n", *(vet+1));
  printf("*vet 2: %d\n", *(vet+2));
  printf("*vet 3: %d\n", *(vet+3));
  printf("*vet 4: %d\n", *(vet+4));
  printf("*vet 5: %d\n", *(vet+5));
  printf("*vet 6: %d\n", *(vet+6));
  printf("*vet 7: %d\n", *(vet+7));

  return 0;
}