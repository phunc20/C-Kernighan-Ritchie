#include <stdio.h>

int main(int argc, char **argv) {
  int m = 5;
  int n = 5;
  int x,y;
  x = m++;
  y = ++n;
  printf("int m = 5;\nint n = 5;\nint x,y;\nx = m++;\ny = ++n;\n");
  printf("x = %d\ny = %d\n", x, y);
  return 0;
}
