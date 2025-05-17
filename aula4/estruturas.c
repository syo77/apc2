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

  printf("\n");

  struct Pessoa pessoa2;
  /* pessoa2 = {.nome = "Maria", .idade = 19, .genero = 'F'}; */
  /* Obtenha do console o nome, a idade e o gênero da pessoa 2. */
    printf("Nome: ");
    int deucerto = scanf("%99[^\n]*c", pessoa2.nome);
    printf("Idade: ");
    deucerto = scanf("%d%*c", &pessoa2.idade);
    /* getchar(); */
    /* * asterisco é para ler um caractere e jogar ele fora */
    printf("Gênero: ");
    deucerto = scanf("%c", &pessoa2.genero);

    printf("\n");
  
    printf("Nome-Pessoa2: %s\n", pessoa2.nome);
    printf("Idade-Pessoa2: %d\n", pessoa2.idade);
    printf("Gênero-Pessoa2: %c\n", toupper(pessoa2.genero));
  
  /* Em seguida exiba esses dados de volta pro console. */

  
  
  return 0;
}