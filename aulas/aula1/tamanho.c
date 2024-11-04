/*
#include <stdio.h>

int main (void) {
  short int numero = 0;
  printf("Tamanho em bytes de numero: %ld\n", sizeof(numero));
  printf("Tamanho em bytes de int: %ld\n", sizeof(int));
  printf("Tamanho em bytes de short: %ld\n", sizeof(short int));
  printf("Tamanho em bytes de long: %ld\n", sizeof(long int));
  return 0;
}
*/

#include <stdio.h>

/*
   S
   0|111 1111 1111 1111
       7    F    F    F
   + 1
   1|000 0000 0000 0000
       8    0    0    0
*/
int main (void) {
  short int numero = 0x7FFF;
  printf("numero: %d (%X)\n", numero, numero);
  numero++;
  printf("numero %d (%X)\n", numero, numero);
  
  return 0;
}