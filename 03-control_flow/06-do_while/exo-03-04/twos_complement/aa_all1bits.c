#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char **argv) {
  int allones = ~0;
  printf("allones = %d(%%d)\n", allones);
  printf("allones = %x(%%x)\n", allones);
  printf("\n");

  int shifted;
  shifted = allones << 1;
  printf("shifted = allones << 1;\n");
  printf("shifted = %d(%%d)\n", shifted);
  printf("shifted = %x(%%x)\n", shifted);
  printf("\n");

  shifted <<= 1;
  printf("shifted <<= 1;\n");
  printf("shifted = %d(%%d)\n", shifted);
  printf("shifted = %x(%%x)\n", shifted);
  printf("\n");

  shifted = allones >> 1;
  printf("shifted = allones >> 1;\n");
  printf("shifted = %d(%%d)\n", shifted);
  printf("shifted = %x(%%x)\n", shifted);
  printf("\n");

  printf("allones + 1 = %d(%%d)\n", allones + 1);
  printf("allones + 1 = %x(%%x)\n", allones + 1);
  printf("\n");

  printf("~allones = %d(%%d)\n", ~allones);
  printf("~allones = %x(%%x)\n", ~allones);

  return 0;
}
