#include <stdio.h>



void imprimirNx(int n, char ch) {
    for(int i = 1; i <= n; i++)
        printf("%c", ch);
    printf("\n");    
    
}

int main(int argc, char *argv[]) {

    printf("imprimirNx: %p", imprimirNx);
    imprimirNx(5, '%');
    void (*p5x)() = imprimir5x;
    void (*pNx)(int n, char ch) = imprimirNx;





    return 0;
}