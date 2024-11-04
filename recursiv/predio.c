#include <stdio.h>

int p(int n) {
    if (n > 0) return p(n-1) + 1;
    return 0;
}

int pIt(int n) {
    int andares = 0;
    for (int i = 1; i <= n; i++) {
        andares += 1;
    }
    return andares;
}

int f(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= 2;
    }
    return res;
}

int f1(int n) {
    if (n > 1) return f1(n-1)*2;
    if (n==1) return 2;
}

long long int fibo(long long int n) {
    if (n > 1) return fibo(n-1)+fibo(n-2);
    if (n == 1) return 1;
    if (n == 0) return 0;
    // n < 0
    return 0;
}

int main () {

printf("%d\n", f1(4));
printf("%lld\n", fibo(50));

    return 0;
}