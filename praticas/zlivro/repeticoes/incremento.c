#include <stdio.h>
int main (void) {

  int x = 5;

  int y = x++ + ++x;

printf("%d, %d\n", x, y);

  return 0;
}