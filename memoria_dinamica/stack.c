#include <stdio.h>
// protótipos de funções
void f1();
void f2();
void f3();


int main () {
    printf("main\n");
    f1();
    return 0;
}

void f1() {
    printf("f1\n");
    f2();
}

void f2() {
    printf("f2\n");
    f3();
}

void f3() {
    printf("f3\n");
}



// int main() {
//     printf("main\n");
//     f1();
//     return 0;
// }

// void f1() {
//     printf("f1\n");
//     f2();
// }

// void f2() {
//     f3();
//     printf("f2\n");
// }

// void f3() {
//     printf("f3\n");
// }