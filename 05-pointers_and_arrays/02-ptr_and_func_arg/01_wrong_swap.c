#include <stdio.h>

void swap(int x, int y) {
  int temp;
  temp = x;
  x = y;
  y = temp;
}


int main(int argc, char **argv) {
  int a = 10;
  int b = -7;
  printf("(Before) a = %d, b = %d\n", a, b);
  swap(a,b);
  printf("(After) a = %d, b = %d\n", a, b);
  return 0;
}
