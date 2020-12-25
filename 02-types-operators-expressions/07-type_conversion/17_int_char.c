#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
  int i = pow(2, 31) - 1;
  char c = pow(2, 7) - 1;
  printf("int i = pow(2, 31) - 1 gives\ni = %d\n", i);
  printf("char c = pow(2, 7) - 1 gives\nc = %c (%%c) = %d (%%d)\n", c, c);

  i = c;
  c = i;
  printf("i = c;\n");
  printf("c = i;\n");
  printf("i = %d\n", i);
  printf("c = %d\n", c);

  return 0;
}


