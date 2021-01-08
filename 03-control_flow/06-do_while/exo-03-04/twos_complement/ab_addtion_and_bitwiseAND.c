#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char **argv) {
  int integers[] = {-128, -37, -7, 0, 1, 2, 45, 99, 121};
  int len = sizeof(integers)/sizeof(int);
  int i,j;
  int a,b;
  for (i=0; i<len; i++)
    for (j=0; j<len; j++) {
      a = integers[i];
      b = integers[j];
      printf("a = %d(%%d) = %x(%%x)\n", a, a);
      printf("b = %d(%%d) = %x(%%x)\n", b, b);
      printf("a + b = %d(%%d)\n", a + b);
      printf("a + b = %x(%%x)\n", a + b);
      printf("a - b = %d(%%d)\n", a - b);
      printf("a - b = %x(%%x)\n", a - b);
      printf("a | b = %d(%%d)\n", a | b);
      printf("a | b = %x(%%x)\n", a | b);
      printf("a & b = %d(%%d)\n", a & b);
      printf("a & b = %x(%%x)\n", a & b);
      printf("a ^ b = %d(%%d)\n", a ^ b);
      printf("a ^ b = %x(%%x)\n", a ^ b);
      printf("\n");
    }
  return 0;

  //int shifted;
  //shifted = allones << 1;
  //printf("shifted = allones << 1;\n");
  //printf("shifted = %d(%%d)\n", shifted);
  //printf("shifted = %x(%%x)\n", shifted);
  //printf("\n");

  //shifted <<= 1;
  //printf("shifted <<= 1;\n");
  //printf("shifted = %d(%%d)\n", shifted);
  //printf("shifted = %x(%%x)\n", shifted);
  //printf("\n");

  //shifted = allones >> 1;
  //printf("shifted = allones >> 1;\n");
  //printf("shifted = %d(%%d)\n", shifted);
  //printf("shifted = %x(%%x)\n", shifted);
  //printf("\n");

  //printf("allones + 1 = %d(%%d)\n", allones + 1);
  //printf("allones + 1 = %x(%%x)\n", allones + 1);
  //printf("\n");

  //printf("~allones = %d(%%d)\n", ~allones);
  //printf("~allones = %x(%%x)\n", ~allones);

  //return 0;
}
