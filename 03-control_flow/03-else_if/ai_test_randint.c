#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv) {
  int len = 100;
  //long int A[len];
  int A[len];
  //int *sorted_randint = randint_isort(len);
  randint_isort(A, len);
  printf("sorted_randint = {");
  for (int i=0; i<len; ++i) {
    //printf("%ld%s", *(sorted_randint + i), (i == len-1) ? "}\n" : ", ");
    printf("%ld%s", A[i], (i == len-1) ? "}\n" : ", ");
  }
  return 0;
}






