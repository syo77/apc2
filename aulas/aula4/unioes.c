#include <stdio.h>

union RGBA_Pixel {
int pixel;
unsigned char rgba[4];
};

int main() {

    union RGBA_Pixel pixel1;
    pixel1.pixel = 0xAAFF00CC; /* vermelho */

      printf("Pixel: %X\n", pixel1.pixel);
      printf("R: %d\n", pixel1.rgba[0]);
      printf("G: %d\n", pixel1.rgba[1]);
      printf("B: %d\n", pixel1.rgba[2]);
      printf("A: %d\n", pixel1.rgba[3]);

  printf("\n");

    union RGBA_Pixel *ponteiro_pixel = &pixel1;
    (*ponteiro_pixel).pixel = 0x00FF0000; /* vermelho */

  printf("Pixel: %X\n", (*ponteiro_pixel).pixel);
  printf("R: %d\n", (*ponteiro_pixel).rgba[0]);
  printf("G: %d\n", (*ponteiro_pixel).rgba[1]);
  printf("B: %d\n", (*ponteiro_pixel).rgba[2]);
  printf("A: %d\n", (*ponteiro_pixel).rgba[3]);

  printf("\n");
  
  /* Uso do operador (seta) -> */

  union RGBA_Pixel *ptr_pixel = &pixel1;

  (*ponteiro_pixel).pixel = 0x00FF0000; /* vermelho */

  printf("Pixel: %X\n", ptr_pixel->pixel);
  printf("R: %d\n", ptr_pixel->rgba[0]);
  printf("G: %d\n", ptr_pixel->rgba[1]);
  printf("B: %d\n", ptr_pixel->rgba[2]);
  printf("A: %d\n", ptr_pixel->rgba[3]);

  return 0;
}