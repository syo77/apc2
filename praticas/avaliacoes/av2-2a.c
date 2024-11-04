#include <stdio.h>

int main() {

  char string[] = "Exercicio de APC II";
  int i = 0;
  char *ptr_s = string;
  char caractere;
  char *ultima_pos = NULL;

  while (*string != '\0') { // novamente, não era necessário esse while, porém eu quis manter
    for (int i = 0; i < *(ptr_s + i); i++) {
      printf("posição [%d]: %c\no endereço é %p\n", i, *(ptr_s + i), ptr_s + i);
    }
    break;
  }

  printf("\nInsira um caractere: ");
  int deucerto = scanf("%c", &caractere);

  while (*ptr_s) {
    if (*ptr_s == caractere) {
      ultima_pos = ptr_s;
    }
    ptr_s++;
  }

  if (ultima_pos) {
    printf("\nO ultimo endereço do caractere '%c' é %p\n", caractere, ultima_pos);
  } else {
    printf("\nCaractere não encontrado\n");
  }

  return 0;
}