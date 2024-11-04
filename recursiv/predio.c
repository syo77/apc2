#include <stdio.h>

int p(int n) {
    if (n > 0) return p(n-1) + 1;
    return 0
}