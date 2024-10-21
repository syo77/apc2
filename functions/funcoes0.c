#include <stdio.h>

void imprimir5x() {
    for(int i = 1; i <= 5; i++) 
       printf("*");
    printf("\n");   
}

void imprimir7x() {
    for(int i = 1; i <= 7; i++)
        printf("*");
    printf("\n");    
    
}

void imprimirNx(int n, char ch) {
    for(int i = 1; i <= n; i++)
        printf("%c", ch);
    printf("\n");    
    
}

int main() {
    printf("imprimirNx: %p", imprimirNx);
    imprimirNx(5, '%');
    void (*p5x)() = imprimir5x;
    void (*pNx)(int n, char ch) = imprimirNx;
    

    return 0;
}