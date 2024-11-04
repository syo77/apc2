#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Número de argumentos: %d\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("Argumento %d: %s\n", i, argv[i]);
    }

    if(argc == 3) {
        int arg1;
        float arg2;
        sscanf(argv[1], "%d", &arg1);
        sscanf(argv[2], "%f", &arg2);

        printf("arg1: %d\n", arg1);
        printf("arg2: %f\n", arg2);
    }




    return 0;
}