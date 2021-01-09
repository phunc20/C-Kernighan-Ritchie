#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv) {
  int a = INT_MIN;
  int b = 6;
  int c = ~0;
  printf(
  "int a = INT_MIN = %x"
  "\n"
  "int b = 6 = %x"
  "\n"
  "int c = ~0 = %x"
  "\n", a, b, c
  );
  printf("a >> 1 = %x\n", a >> 1);
  printf("b >> 1 = %x\n", b >> 1);
  printf("c >> 1 = %x\n", c >> 1);
  return 0;
}
