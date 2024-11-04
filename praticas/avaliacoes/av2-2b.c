#include <stdio.h>

int main () {

  char str[] = "Exercicio de APC II";
  char *ptr = str;
  int resultado;

  printf("\n%p\n", &str[0]); // Só para testar por enquanto
  printf("%p\n", &str[19]);

  printf("\nTamanho da string: %d\n", (int)sizeof(str)-1);
  
  printf("\nO primeiro endereço da string é: %p\n", ptr);
    
  /* while(*ptr != '\0') {
      ptr++;
    } */
  
  printf("\nO último endereço da string é: %p\n",ptr+19);

  resultado = (ptr+19)-ptr;

  printf("\nO total de caracteres é: %d", resultado);

  return 0;
}