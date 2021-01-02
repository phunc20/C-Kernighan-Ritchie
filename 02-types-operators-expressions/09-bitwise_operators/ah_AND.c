#include <stdio.h>
#include "binary.h"

int main(int argc, char **argv) {
  int a = 128;
  printf("%d  = ", a);
  printbb(a);
  printf("\n");
  return 0;
}
