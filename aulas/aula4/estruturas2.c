#include <stdio.h>

struct Pessoa {
  char nome[50];  /* 50 bytes */
  int idade;      /* 04 bytes */
  char genero;    /* 01 byte  */
                  /* 54 bytes */
};

int main(void) {
  struct Pessoa pessoa1 = {"João", 30, 'M'};
  /* struct Pessoa pessoa 1 = {.nome = "João", .idade = 30, .genero = 'M'} */
  printf("Nome: %s\n", pessoa1.nome);
  printf("Idade: %d\n", pessoa1.idade);
  printf("Gênero: %c\n", pessoa1.genero);

  printf("\n");

  struct Pessoa pessoa2;

  printf("Qual o seu nome: ");
  int deu_certo = scanf("%[^\n]s", pessoa2.nome);  /* [^\n] quando poder ter espaco usar antes do string */
  printf("Qual sua idade: ");
  deu_certo = scanf("%d", &pessoa2.idade);
  printf("Qual seu genero: "); 
  deu_certo = scanf(" %c", &pessoa2.genero);

  printf("\n");
  while(getchar() != '\n');

  printf("Nome: %s\n", pessoa2.nome);
  printf("Idade: %d\n", pessoa2.idade);
  printf("Gênero: %c\n", pessoa2.genero);

  /* Em seguida exiba esses dados de volta pro console. */

  return 0;
}