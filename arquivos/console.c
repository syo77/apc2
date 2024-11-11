#include <stdio.h>

// Saída: printf / puts / fprintf
// Entrada: scanf / gets / getch / fscanf / fgets / fgetch

void exemplo1() {
    int n;
    // Escrita para o console
    printf("Digite um número: ");
    // Leitura para o console
    scanf("%d", &n);
    // Escrita para o console
    printf("O número digitado foi: %d\n", n);
}

void exemplo2() {
    int n;
    // Escrita para o console
    fprintf(stdout, "Digite um número: ");
    // Leitura do console
    fscanf(stdin, "%d", &n);
    // Escrita para o console
    fprintf(stdout, "O número digitado foi: %d\n", n);
}

int main() {

    exemplo1();
    exemplo2();






    return 0;
}