#include <stdio.h>

int soma (int a, int b) {
    return a+b;
}
int dobro(int x){
    return 2*x;
}
int maior1(int n1, int n2) {
    if(n1 > n2) {
        return n1;
    }
    else {
        return n2;
    }
}
int maior3(int n1, int n2, int n3) {
    if(n1 > n2 && n1 > n3) {
        return n1;
    }
    else if(n2 > n1 && n2 > n3){
        return n2;
    }
    else {
        return n3;
    }
}

int main() {

    int n1, n2, total;
    int a, b, c;
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);
    total = soma(n1, n2);
    printf("%d+%d=%d\n", n1, n2, total); // Ou
    // printf("%d+%d=%d\n", n1, n2, soma(n, i));
    printf("2*%d=%d e 2*%d=%d\n", n1, dobro(n1), n2, dobro(n2));
    printf("soma dos dobros %d\n", dobro(n1)+dobro(n2));

    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);
    printf("Entre os números %d, %d e %d o maior deles é %d\n", a, b, c, maior3(a,b,c));

return 0;
}