#include <stdio.h>
#include <math.h>

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
  printf("sizeof(int) = %zu\n", sizeof(int));
  int n_bytes = sizeof(int);
  printf("n_bytes := sizeof(int) = %zu(%%zu) = %d(%%d)\n", n_bytes, n_bytes);
  //int k = (int)-pow(2.0, (double) n_bytes*8 - 1);
  //int k = (int)-pow(2, n_bytes*8 - 1);
  int k = -pow(2, n_bytes*8 - 1);
  printf("k := -pow(2, n_bytes*8 - 1) = %d\n", k);
  printf("k + 1 = %d\n", k+1);
  printf("k - 1 = %d\n", k-1);
  printf("-k = %d\n", -k);
  printf("k % 10 = %d % 10 = %d\n", k, k%10);
  printf("(k % 10) + '0' = (%d % 10) + '0' = %d + '0' = %c\n", k, k%10, k%10+'0');

  printf("printd(k) = printd(%d) = ", k);
  printd(k);
  putchar('\n');

  printf("printd(k+1) = printd(%d) = ", k+1);
  printd(k+1);
  putchar('\n');

  return 0;
}
