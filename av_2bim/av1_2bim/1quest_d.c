#include <stdio.h>
void numeroX2_valor(int numero) {
    numero = numero * 2;
    printf("Passagem por valor: %d\n", numero);
}

void numeroX2_referencia(int *numero) {
    *numero = *numero * 2;
    printf("Passagem por referência: %d\n", *numero);
}

int main() {

    int numero_valor = 5;
    printf("Valor original (valor): %d\n", numero_valor);
    numeroX2_valor(numero_valor);
    printf("Número na main depois de chamar a função (valor): %d\n", numero_valor);

    int numero_referencia = 10;
    printf("Valor original (referência): %d\n", numero_referencia);
    numeroX2_referencia(&numero_referencia);
    printf("Número na main depois de chamar a função (referência): %d\n", numero_referencia);

    return 0;
}