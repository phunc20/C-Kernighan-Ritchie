#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  srand(time(NULL));
  int n = rand() - RAND_MAX / 2;
  printf("n = %d\n", n);
  if (n > 0) {
    int i;
    i = 0;
    printf("Inside \"if\", i = %d\n", i);
  }
  else {
    int i;
    i = 127;
    printf("Inside \"else\", i = %d\n", i);
  }
  int i;
  i = -128;
  printf("Outside \"if...else\", i = %d\n", i);
  return 0;
}






