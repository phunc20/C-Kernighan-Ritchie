#include <stdio.h>

int main(int argc, char **argv) {
  int x = 1, y = 2;
  int z = -1;
  int w = 0;
  printf("%d & %d = %d\n", x, y, x & y);
  printf("%d && %d = %d\n", x, y, x && y);
  printf("%d && %d = %d\n", x, z, x && z);
  printf("%d && %d = %d\n", x, w, x && w);
  return 0;
}
