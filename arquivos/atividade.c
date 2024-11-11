#include <stdio.h>

// leitura
void exemplo1() {
    FILE *input;
    // abertura do arquivo
    input = fopen("./data/notas.txt", "r");
    // if(input == NULL) {
    if(!input) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }
    // leitura
    // extraia do arquivo as notas separadas por tabulação,
    // para cada linha. Após, a extração exiba a média das notas
    // de cada aluno.
    // feof()
    // fscanf
    float notas[2];
    while(!feof(input)) {
        fscanf(input, "%f\t%f\n", &notas[0], &notas[1]);
        printf("Média: %.2f\n", (notas[0]+notas[1])/2);
    }
    // while(fscanf(input, "%f\t%f\n", &notas[0], &notas[1]) == 2) {
    //     printf("Média: %.2f\n", (notas[0]+notas[1])/2);
    // }
    fclose(input);
}

// escrita
void exemplo2(int m, int n, float notas[m][n]) {
    FILE *out;
    out = fopen("./data/notas.txt", "w");
    // if(out == NULL)
    if(!out) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }
    // escrita
    // Salvar um vetor de notas no arquivo
    // Para cada linha, salvar as duas notas
    // separadas por tabulação ('\t')
    for(int aluno = 0; aluno < m; aluno++) {
        fprintf(out, "%.2f\t%.2f\n", notas[aluno][0], notas[aluno][1]);
    }

    fclose(out);
}

int main() {
    // exemplo1();
    float notas[4][2] = {
        {7,   8},
        {4,   3},
        {9, 9.5},
        {3,   7}
    };
    exemplo2(4, 2, notas);
    exemplo1();
    return 0;
}