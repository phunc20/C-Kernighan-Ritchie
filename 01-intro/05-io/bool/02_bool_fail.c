#include <stdio.h>
// Because there is no include of <stdbool.h>, this file should fail to compile.

int main()
{
  bool t = true;
  bool f = false;
  printf("t = %d, f = %d\n", t, f);
}
