#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
  int i = pow(2, 31);
  char c = pow(2, 7) - 2;
  printf("int i = pow(2, 31) gives\ni = %d\n", i);
  printf("char c = pow(2, 7) - 1 gives\nc = %c (%%c) = %d (%%d)\n", c, c);

  return 0;
}
