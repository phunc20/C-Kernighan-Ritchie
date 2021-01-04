#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char **argv) {
  int a,b,m;
  a = 4;
  b = 5;
  m = (a+b)/2;
  printf("a = %d, b = %d, (a+b)/2 = %d\n", a, b, m);
  a = 5;
  b = 6;
  m = (a+b)/2;
  printf("a = %d, b = %d, (a+b)/2 = %d\n", a, b, m);
  return 0;
}

