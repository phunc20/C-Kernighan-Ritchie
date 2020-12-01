#include <stdio.h>
#include <stdbool.h>

int main()
{
  printf("sizeof(bool) = %zu\n", sizeof(bool));
  printf("sizeof(_Bool) = %zu\n", sizeof(_Bool));
  printf("\n");
  printf("sizeof(char) = %zu\n", sizeof(char));
  printf("sizeof(int) = %zu\n", sizeof(int));
  printf("sizeof(short) = %zu\n", sizeof(short));
  printf("sizeof(long) = %zu\n", sizeof(long));
  printf("sizeof(float) = %zu\n", sizeof(float));
  printf("sizeof(double) = %zu\n", sizeof(double));
  // N.B.
  // These will both print "sizeof(...) = 1", which does not mean 1 bit; instead, it means 1 byte, i.e.
  // true  = 00000001
  // false = 00000000
}

