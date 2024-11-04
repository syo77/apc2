/*
Dado o exemplo, tanto v[4] e *(v+4) correspondem valor 8 do índice 4, assim como
&v[4] e v+4 correspondem ao endereço 0x116 do índice 4. Sendo assim, refatore os
códigos a seguir para utilizar notação de ponteiros ao invés de vetor:

b) Algoritmo que percorre uma string:
*/

// --------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------
/*
Uma observação muito grande, professor.
O código que estava na proposta da atividade estava dando um loop infinito de muitos A's, então eu adaptei o código para poder rodar direito.
*/
// --------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {
  char string[50] = "Avaliacao 2";
  int i = 0;
  
  while (string[i] != '\0') { // não era necessário esse while, porém eu quis manter
    for (int i = 0; i < string[i]; i++) {
      printf("string[%d]: %c\n", i, string[i]);
    }
    break;
  }

  printf("\n");

  char *ptr_s = string;

  while (*string != '\0') {
    for (int i = 0; i < *(ptr_s+i); i++) {
      printf("string %d: %c\n", i, *(ptr_s+i));
    }
    break;
  }

  return 0;
}

// char espaco = ' ';

/*
if(*(ptr_s+i) == espaco) {
  printf("Espaço\n");
} */