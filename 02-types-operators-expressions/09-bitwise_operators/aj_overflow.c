#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
  int a, right_shifted;
  a = (1 << 31);
  right_shifted = a >> 1;
  printf("a      = (1 << 31);\n");
  printf("a      = %d = (%o)_8\n", a, a);
  printf("a >> 1 = %d = (%o)_8\n", right_shifted, right_shifted);
  printf("\n");
  return 0;
}
