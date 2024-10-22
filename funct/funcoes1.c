#include <stdio.h>

void linha() {
        for(int i = 1; i <= 20; i++) {
        printf("*");
    }
    printf("\n");
    }
void linha_3x() {
    for(int i = 1; i <= 3; i++){
        printf("*");
    }
    printf("\n");
}
void linha_5x() {
    for(int i = 1; i <= 5; i++){
        printf("*");
    }
    printf("\n");
}
void linha_7x() {
    for(int i = 1; i <= 7; i++){
        printf("*");
    }
    printf("\n");
}
void linha_mlhr(int num) {
    for(int i = 1; i <= num; i++) {
        printf("*");
    }
    printf("\n");
}
void linha_qualquer(int num, char ch) {
    for(int i = 1; i <= num; i++) {
        printf("%c", ch);
    }
    printf("\n");
}


int main() {


    for(int i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');
    // Escrito com identação sem bloco de chaves
    for(int i = 1; i <= 20; i++) {
        printf("*");
    }
    printf("\n");
    // Escrito com bloco de chaves

    linha();
    printf("\n");
    linha_3x();
    linha_5x();
    linha_7x();
    linha_5x();
    linha_3x();
    linha_mlhr(1);
    linha_qualquer(7, '$');


    return 0;
}