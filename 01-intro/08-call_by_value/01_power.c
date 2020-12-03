#include <stdio.h>

int power(int m, int n);

int main() {
  int i;

  for (i = 0; i < 10; ++i)
    printf("i = %d, power(2,%d) = %7d, power(-3,%d) = %7d\n", i, i, power(2,i), i, power(-3,i));
  return 0;
}

int power(int base, int n) {
  int p;
  for (p=1; n > 0; --n)
    p = p * base;
  return p;
}
