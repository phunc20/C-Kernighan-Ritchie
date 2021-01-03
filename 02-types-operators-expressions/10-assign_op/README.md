
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/10-assign_op ❯❯❯ gcc aa_test_bitcount.c utils.c
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/10-assign_op ❯❯❯ ./a.out
bitcount(557733) = 14
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/10-assign_op ❯❯❯ cat aa_test_bitcount.c
#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv) {
  int a = 0557733; // in binary, this equals (101101111111011011)_2, there being 14 "1's"
  int b = bitcount(a);
  printf("bitcount(%o) = %d\n", a, b);

  return 0;
}
