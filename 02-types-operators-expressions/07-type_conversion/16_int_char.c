#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
  int i = pow(2, 31) - 1;
  char c = pow(2, 7);
  printf("int i = pow(2, 31) - 1 gives\ni = %d\n", i);
  printf("char c = pow(2, 7) gives\nc = %c (%%c) = %d (%%d)\n", c, c);

  return 0;
}
