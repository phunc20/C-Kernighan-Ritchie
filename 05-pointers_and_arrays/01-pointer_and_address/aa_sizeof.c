#include <stdio.h>
//#include <stdlib.h>

int main(int argc, char **argv) {
  printf("sizeof(char) = %zu\n", sizeof(char));
  printf("sizeof(short) = %zu\n", sizeof(short));
  printf("sizeof(long) = %zu\n", sizeof(long));
  printf("sizeof(int) = %zu\n", sizeof(int));
  printf("sizeof(float) = %zu\n", sizeof(float));
  printf("sizeof(double) = %zu\n", sizeof(double));
  printf("sizeof(char*) = %zu\n", sizeof(char*));
  printf("sizeof(int*) = %zu\n", sizeof(int*));
  printf("sizeof(double*) = %zu\n", sizeof(double*));
  return 0;
}
