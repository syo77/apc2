#include <stdio.h>

int main () {

char nome[25];

printf("Escreva seu nome: ");
scanf("%[^\n]", nome);

printf("Olá, %s!\n", nome);


return 0;
}