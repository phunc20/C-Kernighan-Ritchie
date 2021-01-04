#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "utils.h"

int main(int argc, char **argv) {
  srand(time(NULL));
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
  int index;
  //index = len - 1;
  index = rand() % len;
  int x = A[index];
  //printf("v = [");
  //for (int i=0; i<n; ++i)
  //  printf("%d%s", v[i], (i == n-1) ? "]\n" : ", ");
  printf("len = %d\n", len);
  printf("x = A[%d]\n", index);
  printf("binsearch(x, A, len) = %d\n", binsearch(x, A, len));
  return 0;
}






