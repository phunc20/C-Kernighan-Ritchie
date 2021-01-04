#include <stdio.h>
#include "faster.h"

int main(int argc, char **argv) {
  int a = 0557733; // in binary, this equals (101101111111011011)_2, there being 14 "1's"
  int b = bitcount(a);
  printf("bitcount(%o) = %d\n", a, b);

  return 0;
}
