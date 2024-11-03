#include <stdio.h>
int fnc_inverter_sinal(int numero) {
    return -numero;
}

void procedimento_inverter_sinal(int numero) {
    printf("Número do procedimento depois da inversão: %d\n", -numero);
}


int main() {
    int numero_fnc = -5;
    printf("Número da função antes da inversão: %d\n", numero_fnc);
    numero_fnc = fnc_inverter_sinal(numero_fnc);
    printf("Número da função depois da inversão: %d\n", numero_fnc);

    int numero_procedimento = -10;
    printf("Número do procedimento antes da inversão: %d\n", numero_procedimento);
    procedimento_inverter_sinal(numero_procedimento);
    
    return 0;
}