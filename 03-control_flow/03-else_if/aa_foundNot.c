#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv) {
  int v[] = {-10, -7, -3, -2, 0, 0, 2, 4, 100, 1000};
  int n = sizeof(v) / sizeof(int);
  int x = 3;
  /* This example should prison the function 
   * my_binsearch() in an infinite loop
   */
  printf("my_binsearch(x, v, n) = %d\n", my_binsearch(x, v, n));
  return 0;
}
