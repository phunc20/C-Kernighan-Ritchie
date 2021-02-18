#include <stdio.h>

/* printd: print n in decimal */
void printd(int n) {
  if (n < 0) {
    putchar('-');
    n = -n;
  }
  if (n/10)
    printd(n/10);
  putchar(n%10 + '0');
}

int main(int argc, char **argv) {
  int k = 123;
  printf("printd(%d) = ", k);
  printd(k);
  putchar('\n');
  return 0;
}
