#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 3.a)
int *build_int_array(unsigned int size) {
    int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Erro ao alocar memória.\n");
        return NULL;
    }
    for (unsigned int i = 0; i < size; i++) {
        array[i] = 0;
    }
    return array;
}

// 3.b)
float *medias_das_notas(int m, int n, float matriz[m][n]) {
    float *medias = (float *)malloc(m * sizeof(float));
    if (medias == NULL) {
        printf("Erro ao alocaar memória para as médias.\n");
        return NULL;
    }
    for (int i = 0; i < m; i++) {
        float soma = 0;
        for (int j = 0; j < n; j++) {
            soma += matriz[i][j];
        }
        medias[i] = soma / n;
    }
    return medias;
}

// 3.c)
char *repete_string(char str[], int n) {
    int tamanho_orig = strlen(str);
    int tamanho_nova = tamanho_orig * n;
    char *nova_string = (char *)malloc((tamanho_nova + 1) * sizeof(char));
    if (nova_string == NULL) {
        printf("Erro ao alocar memória para a nova string.\n");
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        strcpy(nova_string + (i * tamanho_orig), str);
    }
    return nova_string;
}

int main() {

    // 3.a) *(main)*
    unsigned int size;
    printf("Digite o tamanho do array: ");
    scanf("%u", &size);
    int *meuArray = build_int_array(size);
    if (meuArray != NULL) {
        for(unsigned int i = 0; i < size; i++) {
            printf("Elemento %u: %d\n", i, meuArray[i]);
        }
        free(meuArray);
    }

    // 3.b) *(main)*
    int m = 3;
    int n1 = 2;
    float matriz[3][2] = {
        {5, 7},
        {8, 7},
        {6, 10}
    };
    float *resultado = medias_das_notas(m, n1, matriz);
    if (resultado != NULL) {
        for (int i = 0; i< m; i++) {
            printf("Média do aluno %d: %.1f\n",i , resultado[i]);
        }
        free(resultado);
    }

    // 3.c) *(main)*
    char str[] = "Ana";
    int n2 = 3;
    char *novaString = repete_string(str, n2);
    if (novaString != NULL) {
        printf("Resultado: %s\n", novaString);
        free(novaString);
    }
    return 0;
}