#include <stdio.h>

int main(int argc, char **argv) {
  int x = 5;
  printf("%d >> 0 = %d\n", x, x >> 0);
  printf("%d >> 1 = %d\n", x, x >> 1);
  printf("%d >> 2 = %d\n", x, x >> 2);
  printf("%d >> -1 = %d\n", x, x >> -1);
  return 0;
}
