#include <stdio.h>
#include <ctype.h>

struct Pessoa {
char nome[100];      // 100 bytes
int idade;           //   4 bytes
char genero;         //   1 byte
                     // 108 bytes
};

int main (void) {

struct Pessoa pessoa2;

sscanf("Maria Clara\n", "%10[^\n]", pessoa2.nome);
sscanf("18", "%d", &pessoa2.idade);
sscanf("F", "%c", &pessoa2.genero);

int x = 15 % 16;
printf("%d\n", x);

return 0;
}