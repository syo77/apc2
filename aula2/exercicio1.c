#include <stdio.h> 

int main(void) {

  int n = 1025;
  int p;
  char *pchar = (char *)&n;
  *(pchar+2) = 1;
  printf("byte0: %d, byte1: %d, byte2: %d, byte3: %d\n", *pchar, *(pchar+1), *(pchar+2), *(pchar+3));
  printf("n: %d\n", n);
  
  return 0;
}