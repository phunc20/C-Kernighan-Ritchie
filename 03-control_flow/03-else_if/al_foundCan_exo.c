#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv) {
  //int len = (1 << 31) - 1;
  //int len = 1 << 30;
  int len = 99999;
  //long int A[len];
  int A[len];
  //int *sorted_randint = randint_isort(len);
  randint_isort(A, len);
  //printf("sorted_randint = {");
  //for (int i=0; i<len; ++i) {
  //  printf("%ld%s", A[i], (i == len-1) ? "}\n" : ", ");
  //}
  int x = A[len-1];
  //printf("v = [");
  //for (int i=0; i<n; ++i)
  //  printf("%d%s", v[i], (i == n-1) ? "]\n" : ", ");
  printf("len = %d\n", len);
  printf("x = %d\n", x);
  printf("exo_binsearch2(x, A, len) = %d\n", exo_binsearch2(x, A, len));
  return 0;
}



