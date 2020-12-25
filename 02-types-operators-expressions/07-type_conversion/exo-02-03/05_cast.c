#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char **argv) {
  char c = '0';
  for (int i=0; i<=9; ++i) {
    printf("'%c' = %d\n", c+i, c+i);
  }
  return 0;
}
