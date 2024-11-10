#include <stdio.h>

int f_soma(int n) {
    // Critério de parada
    if (n==0) {
        return 0;
    }
    if (n==1) {
        printf("1 ");
        return 1;
    }
    // Passo recursivo
    printf("%d + ", n);
    return n + f_soma(n-1);
}

int f_3em3(int n) {
    // Critério de parada
    if (n==0) {
        return 0;
    }
    if (n==1) {
        return 2;
    }
    // Passo recursivo
    return f_3em3(n-1)+3;
}

int f_x2(int n) {
    // Critério de parada
    if (n==0) {
        return 0;
    }
    if (n==1) {
        return 3;
    }
    // Passo recursivo
    return f_x2(n-1)*2;
}

int f_apertos(int n) {
    // Critério de parada
    if (n==0) {
        return 0;
    }
    if (n==1) {
        return 0;
    }
    // Passo recursivo
    return f_apertos(n-1) + (n-1);
}


int main() {

printf("Sequência: ");
int resultado = f_soma(0);
printf("= %d\n", resultado);

int n_3em3 = 5;  // Testando com n_3em3 = 5
    printf("Sequência para n_3em3 = %d: ", n_3em3);
    for (int i = 1; i <= n_3em3; i++) {
        printf("%d ", f_3em3(i));
    }
    printf("\n");

    n_3em3 = 0;  // Testando com n_3em3 = 0
    printf("Resultado para n_3em3 = %d: %d\n", n_3em3, f_3em3(n_3em3));

    int n_x2 = 5;  // Testando com n_x2 = 5
    printf("Sequência para n_x2 = %d: ", n_x2);
    for (int i = 1; i <= n_x2; i++) {
        printf("%d ", f_x2(i));
    }
    printf("\n");

    n_x2 = 0;  // Testando com n_x2 = 0
    printf("Resultado para n_x2 = %d: %d\n", n_x2, f_x2(n_x2));

    int n_apertos = 5;  // Testando com 5 pessoas
    printf("Número de apertos de mão para %d pessoas: %d\n", n_apertos, f_apertos(n_apertos));
    
    n_apertos = 3;  // Testando com 3 pessoas
    printf("Número de apertos de mão para %d pessoas: %d\n", n_apertos, f_apertos(n_apertos));

    n_apertos = 1;
    printf("Número de apertos de mão para %d pessoas: %d\n", n_apertos, f_apertos(n_apertos));

    n_apertos = 0;
    printf("Número de apertos de mão para %d pessoas: %d\n", n_apertos, f_apertos(n_apertos));

    return 0;
}