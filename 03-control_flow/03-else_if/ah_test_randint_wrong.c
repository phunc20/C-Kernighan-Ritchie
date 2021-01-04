#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv) {
  int len = 10;
  int sorted_randint[len] = randint_isort(len);
  printf("sorted_randint = {");
  for (int i=0; i<len; ++i)
    printf("%ld%s", sorted_randint[i], (i == len-1) ? "}\n" : ", ");
  return 0;
}






