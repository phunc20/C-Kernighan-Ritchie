#include <stdio.h>
#include "../utils.h"

int main(int argc, char **argv) {
  int v[] = {-10, -7, -3, -2, 0, 0, 2, 4, 100, 1000};
  int n = sizeof(v) / sizeof(int);
  int x = 0;
  printf("v = [");
  for (int i=0; i<n; ++i)
    printf("%d%s", v[i], (i == n-1) ? "]\n" : ", ");
  printf("n = %d\n", n);
  printf("x = %d\n", x);
  printf("exo_binsearch2(x, v, n) = %d\n", exo_binsearch2(x, v, n));
  return 0;
}
