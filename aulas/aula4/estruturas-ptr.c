#include <stdio.h>
#include <ctype.h>

struct Pessoa {
char nome[100];      /* 100 bytes */
int idade;           /*   4 bytes */
char genero;         /*   1 byte  */
                     /* 108 bytes */
};

int main (void) {

  struct Pessoa pessoa1 = {"João", 30, 'M'};
  /* struct Pessoa pessoa 1 = {.nome = "João", .idade = 30, .genero = 'M'} */
  printf("Nome: %s\n", pessoa1.nome);
  printf("Idade: %d\n", pessoa1.idade);
  printf("Gênero: %c\n", pessoa1.genero);

  struct Pessoa *ptr_pessoa;
  ptr_pessoa = &pessoa1;
  
  printf("Utilizando struct com ponteiro:\n");
  printf("Nome: %s\n", (*ptr_pessoa).nome);
  printf("Idade: %d\n", (*ptr_pessoa).idade);
  printf("Gênero: %c\n", (*ptr_pessoa).genero);

  printf("Utilizando struct com ponteiro usando ->:\n");
  printf("Nome: %s\n", ptr_pessoa->nome);
  printf("Idade: %d\n", ptr_pessoa->idade);
  printf("Gênero: %c\n", ptr_pessoa->genero);


  return 0;
}