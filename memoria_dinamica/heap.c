#include <stdio.h> // printf / scanf
#include <stdlib.h> // malloc / free / realloc

int *criar_vetor(unsigned int n_elementos, int inicializacao) {
    int *vet = malloc(sizeof(int) * n_elementos);
    if(vet != NULL) {
        // lógica da inicialização do vetor
        for(int i = 0; i < n_elementos; i++) {
            vet[i] = inicializacao;
        }
    }
    return vet;
}

void exibir_vetor(int n_elementos, int *vet) {
    if(n_elementos < 0) return;
    for(int i = 0; i < n_elementos; i++) {
        printf("vet[%d]: %d\n", i, vet[i]);
    }
}

int main() {
    int *dynamic_num;
    int *dynamic_vet;
    int num;
    printf("&dynamic_num: %p\n", &dynamic_num);
    printf("&dynamic_vet: %p\n", &dynamic_vet);
    printf("&num: %p\n", &num);

    dynamic_num = (int *)malloc(sizeof(int));
    *dynamic_num = 5;
    printf("dynamic_num = %d (end: %p)\n", *dynamic_num, dynamic_num);
    dynamic_vet = (int *)malloc(3*sizeof(int));
    dynamic_vet[0] = 1;
    dynamic_vet[1] = 2;
    dynamic_vet[2] = 3;
    printf("dynamic_vet[0] = %d (end: %p)\n", dynamic_vet[0], dynamic_vet + 0);
    printf("dynamic_vet[1] = %d (end: %p)\n", dynamic_vet[1], dynamic_vet + 1);
    printf("dynamic_vet[2] = %d (end: %p)\n", dynamic_vet[2], dynamic_vet + 2);

    dynamic_vet = (int *)realloc(dynamic_vet, 5*sizeof(int));
    free(dynamic_num);
    free(dynamic_vet);

    int *vet1 = criar_vetor(5, 10);
    printf("Vet1:\n");
    exibir_vetor(5, vet1);
    int *vet2 = criar_vetor(3, 7);
    printf("Vet2:\n");
    exibir_vetor(3, vet2);
    int *vet3 = criar_vetor(2, 1);
    printf("Vet3:\n");
    exibir_vetor(2, vet3);

    free(vet1);
    free(vet2);
    free(vet3);

    return 0;
}