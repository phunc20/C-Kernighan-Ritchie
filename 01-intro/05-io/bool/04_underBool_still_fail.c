#include <stdio.h>
// Because there is no include of <stdbool.h>, this file should fail to compile.

int main()
{
  _Bool t = true;
  _Bool f = false;
  printf("t = %d, f = %d\n", t, f);
}
