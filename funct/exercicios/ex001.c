#include <stdio.h>

int abs(int n) {
    if(n < 0) {
        n = n*(-1);
    }
    return n;
}

int is_digit(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    } else  {
        return 0;
    }
}

void exibir_horas(int milissegundos) {
    int horas, minutos, segundos, resto;

    horas = milissegundos / (1000 * 60 * 60);
    resto = milissegundos % (1000 * 60 * 60);

    minutos = resto / (1000 * 60);
    resto = resto % (1000 * 60);

    segundos = resto / (1000);
    resto = resto % (1000);

    printf("%02d:%02d:%02d:%03d\n", horas, minutos, segundos, milissegundos);
}

int main() {

    int modulo;
    char digito;
    int ms;

    printf("Funções\n");


    printf("Insira o numero que deseja colocar em módulo: ");
    scanf("%d", &modulo);

    printf("O módulo do número %d é igual a |%d|", modulo, abs(modulo));
    printf("\n");

    printf("Verifique se o caractere é digito: ");
    scanf("%c", &digito);

    printf("O caractere '%c' retornou %d", digito, is_digit(digito));
    printf("\n");

    printf("Digite o tempo em milissegundos: ");
    scanf("%d", &ms);
    exibir_horas(ms);

    return 0; 
}