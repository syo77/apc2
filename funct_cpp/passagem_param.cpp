#include <stdio.h>

void exibir(int x, int y);
void add_valor(int n1, int n2);
void add_referencia(int &n1, int n2);
void add_ponteiro(int *n1, int n2);

void add_valor(int n1, int n2) {
    n1 = n2 + n1;
    printf("VALOR (função exibir) - ");
    exibir(n1, n2);
}

// Passagem de parâmetros por referência
// n1 e x coexistem no mesmo endereço de memória
// n2 = y (cópia do valor de y)
void add_referencia(int &n1, int n2) {
    n1 = n2 + n1;
    printf("REFERÊNCIA (função exibir) - ");
    exibir(n1, n2);
}

// Simulando o que é possível com passagem de parâmetros por referência
// n1 = &x (valor), n2 = y (cópia do valor de y)
void add_ponteiro(int *n1, int n2) {
    *n1 = *n1 + n2;
    printf("PONTEIRO (função exibir) - ");
    exibir(*n1, n2);
}

void exibir(int x, int y) {
    printf("x: %d, y: %d\n", x , y);
}

int main() {

    int n = 5;
    int &ref = n; // Referência (*Não existe em C*)
                  // Compartilha o mesmo endereço de n

    int *p = &n;  // Ponteiro para n
                  // Possui endereço próprio e aponta para endereço de n

    ref = 10;
    printf("n: %d (&n: %p, &ref: %p, &p: %p)\n", n, &n, &ref, &p);
    *p = 15;
    printf("n: %d (&n: %p, &ref: %p, &p: %p)\n", n, &n, &ref, &p);

    int x = 3, y = 5;
    

    add_valor(x, y);
    // int n1 = x, n2 = y;
    // n1 = n1 + n2;
    printf("VALOR - x: %d, y:%d\n", x, y);

    add_referencia(x, y);
    // int &n1 = x, n2 = y;
    // n1 = n1 + n2;
    printf("REFERÊNCIA - x: %d, y: %d\n", x, y);

    add_ponteiro(&x, y);
    // int *n1 = &x, n2 = y
    // *n1 = *n1 + n2
    printf("PONTEIRO - x: %d, y: %d\n", x, y);


    printf("Distância(3, 5): %.1f\n", distancia(3,5));
    printf("Distância(3, 5): %.1f\n", distancia(5,3));
    printf("Distância(3, 5): %.1f\n", distancia(5,5));


    return 0;
}