#include <stdio.h>

void swap(int *px, int *py) {
  int temp;
  temp = *px;
  *px = *py;
  *py = temp;
}


int main(int argc, char **argv) {
  int a = 10;
  int b = -7;
  printf("(Before) a = %d, b = %d\n", a, b);
  swap(&a,&b);
  printf("(After) a = %d, b = %d\n", a, b);
  return 0;
}
