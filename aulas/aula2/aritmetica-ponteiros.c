#include <stdio.h>

int main(void) {

  printf("sizeof(int): %d\n", (int)sizeof(int));
  printf("sizeof(char): %d\n", (int)sizeof(char));
  printf("sizeof(float): %d\n", (int)sizeof(float));
  printf("sizeof(double): %d\n", (int)sizeof(double));

  int inteiro = 100; // &inteiro = 0x100
  printf("i: %d, i+1: %d, i+20: %d\n", inteiro, inteiro+1, inteiro+20);
  printf("i: %d, i-1: %d, i-20: %d\n", inteiro, inteiro-1, inteiro-20);

  printf("\n");

  int *pint = &inteiro;
  printf("pint: %ul\npint+1: %ul\npint+20: %ul\n", pint, pint+1, pint+20);
  printf("pint: %ul\npint-1: %ul\npint-20: %ul\n", pint, pint-1, pint-20);

  printf("\n");
  
  char *pchar = (char *)&inteiro;
  printf("pchar: %ul\npchar+1: %ul\npchar+20: %ul\n", pchar, pchar+1, pchar+20);
  printf("pchar: %ul\npchar-1: %ul\npchar-20: %ul\n", pchar, pchar-1, pchar-20);


  return 0;
}