#include <stdio.h>
#include "bits.h"

int main(int argc, char **argv) {
  /* Say, 0b1101011111 (python expression) is the number we want to test
   * with p = 7, n = 7. The result should be 0101111, i.e. 47,
   * the original number being 0o1537 (python expression), i.e. 01537(c expression)
   */
  int x = 01537;
  int p = 7;
  int n = 7;
  //int n = 9;  // To my surprise, this compiles w/o problem.
  int ans = 47;
  printf("getbits(%d, %d, %d) = %d\n", x,p,n,getbits(x,p,n));
  printf("Expected ans: %d\n", ans);
  return 0;
}
