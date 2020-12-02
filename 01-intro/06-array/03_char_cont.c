#include <stdio.h>

int main() {
  int c;
  for (c=0; c<256; ++c)
    printf("%3d = %c\n", c, c);
}
