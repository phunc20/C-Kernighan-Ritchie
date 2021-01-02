#include <stdio.h>
#include "binary.h"

int main(int argc, char **argv) {
  int m = 1000, n = 3;
  //printf("m = %d, n = %d\n", m, n);
  printf("%d & 0177 = %d\n", m, m & 0177);
  printf("%d & 177 = %d\n", m, m & 177);
  printf("%d & 0177 = %d\n", n, n & 0177);
  printf("%d & 177 = %d\n", n, n & 177);

  printf("\n");
  printf("0177 = %d\n", 0177);
  printf("0177 = (");
  printb(0177);
  printf(")_2\n");

  printf("177  = (");
  printb(177);
  printf(")_2\n");
  return 0;
}
