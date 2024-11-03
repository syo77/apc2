#include <stdio.h>
#include <math.h>

// Códigos questão 2

// 2.a)
int abs(int x) {
    x *= -1;
}

// 2.b)
int eVogal(char ch) {
    char vogais[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < 10; i++) {
        if (ch == vogais[i]) {
            return 1;
        }
    }
    return 0;
}

// 2.c)
int eQuadrado(int x, int y) {
    if (x == y*y) {
        return 1;
    }
    else {
        return 0;
    }
}

// 2.d)
double obterSegundos(double horas) {
    double segundos = horas * 60 * 60;
    return segundos;
}

// 2.e)
double converterHoras(double horas, char formato) {
    double segundos = horas * 60 * 60;
    double minutos = horas * 60;
    if (formato == 's' || formato == 'S') {
        return segundos;
    }
    else if (formato == 'm' || formato == 'M') {
        return minutos;
    }
    else if (formato == 'h' || formato == 'H') {
        return horas;
    }
    else {
        return -1;
    }
}

// 2.f)
void exibirMedia(int n, int *vet) {
    double soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vet[i];
    }
    double media = soma / n;
    printf("Média: %.1f\n", media);
}

// 2.g)
int buscarValor(int n, int *vetor, int busca) {
    for (int i = 0; i < n; i++) {
        if (busca == vetor[i]) {
            return i;
        }
    }
    return -1;
}

// 2.h)
void potencia(int *x, int y) {
   printf("O resultado de %d elevado a %d é: %.1f\n", *x, y, pow(*x, y));
}

// 2.i)
int preencherMatriz(int m, int n, int matriz[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    return 0;
}

// 2.j)
void trocar_numeros(int *a, int *b) {
    int valor_a = *a;
    *a = *b;
    *b = valor_a;
}
// -----------------------------------------------------------------------------------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------------------
int main() {

    // 2.a)
    int valor_absO1 = -10;
    int valor_absO2 = -5;
    int valor_abs1 = abs(valor_absO1);
    int valor_abs2 = abs(valor_absO2);
    printf("Valor de absoluto de %d é igual a |%d|\n", valor_absO1, valor_abs1);
    printf("Valor de absoluto de %d é igual a |%d|\n", valor_absO2, valor_abs2);

    // 2.b)
    char vogal;
    char vogal_verif2 = 'M';
    char vogal_verif1 = 'A';
    // printf("Digite uma letra para verificar se é vogal: ");
    // scanf("%c", &vogal);
    printf("eVogal('%c'), retornou: %d\n", vogal_verif2, eVogal(vogal_verif2));
    printf("eVogal('%c'), retornou: %d\n", vogal_verif1, eVogal(vogal_verif1));

    // 2.c)
    int a = 9;
    int b = 3;
    printf("eQuadrado(%d, %d) retornou: %d\n", a, b, eQuadrado(a, b));
    printf("eQuadrado(%d, %d) retornou: %d\n", b, a, eQuadrado(b, a));
    
    // 2.d)
    double horas = 1;
    printf("obterSegundos(%.1f) retornou: %.0f segundos\n", horas, obterSegundos(horas));

    // 2.e)
    double hours = 1;
    char formato1 = 's';
    char formato2 = 'S';
    char formato3 = 'm';
    char formato4 = 'M';
    char formato5 = 'h';
    char formato6 = 'H';
    char formato7 = 'x';
    printf("converterHoras(%.1f, %c) retornou: %.0f\n", hours, formato1, converterHoras(hours, formato1));
    printf("converterHoras(%.1f, %c) retornou: %.0f\n", hours, formato2, converterHoras(hours, formato2));
    printf("converterHoras(%.1f, %c) retornou: %.0f\n", hours, formato3, converterHoras(hours, formato3));
    printf("converterHoras(%.1f, %c) retornou: %.0f\n", hours, formato4, converterHoras(hours, formato4));
    printf("converterHoras(%.1f, %c) retornou: %.0f\n", hours, formato5, converterHoras(hours, formato5));
    printf("converterHoras(%.1f, %c) retornou: %.0f\n", hours, formato6, converterHoras(hours, formato6));
    printf("converterHoras(%.1f, %c) retornou: %.0f\n", hours, formato7, converterHoras(hours, formato7));

    // 2.f)
    int vet[] = {5, 7, 9};
    int n1 = 3; // sizeof(vet) / sizeof(vet[0])
    exibirMedia(n1, vet);

    // 2.g)
    int vetor[] = {1, 2, 3, 4, 5};
    int n2 = 5; // sizeof(vetor) / sizeof(vetor[0])
    int busca = 3;
    int resultado = buscarValor(n2, vetor, busca);
    printf("Função: buscarValor(%d, {1, 2, 3, 4, 5}, %d)\n", n2, busca);
    if (resultado != -1) {
        printf("Encontrado no indice: %d\n", resultado);
    } else {
        printf("Não encontrado!\n");
    }

    // 2.h)
    int n3 = 5;
    potencia(&n3, 2);

    // 2.i)
    int m = 2, n = 3;
    int matriz[m][n];
    preencherMatriz(m, n, matriz);
    printf("Matriz preenchida:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // 2.j)
    int numero1 = 3;
    int numero2 = 2;
    printf("Antes da troca: numero1 = %d, numero2 = %d", numero1, numero2);
    trocar_numeros(&numero1, &numero2);
    printf("Depois da troca: numero1 = %d, numero2 = %d", numero1, numero2);

    return 0;
}