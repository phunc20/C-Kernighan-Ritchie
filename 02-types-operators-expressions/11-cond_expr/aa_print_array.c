#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char **argv) {
  int a[] = {
    -10, -9, -8, -7, -6, -5, -4, -3, -2, -1,
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16
  };
  int n = sizeof(a) / sizeof(int);
  printf("n = %d\n", n);
  for (int i=0; i<n; ++i)
    printf("%d%c", a[i], (i%10==9 || i==n-1) ? '\n' : ' ');
  return 0;
}
