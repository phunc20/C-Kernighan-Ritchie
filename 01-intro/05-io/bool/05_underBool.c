#include <stdio.h>
// Because there is no include of <stdbool.h>, this file should fail to compile.

int main()
{
  // In 04_underBool_still_fail.c, we failed probably because we shouldn't have used true and false, which exist only in <stdbool.h>
  _Bool t = 1;
  _Bool f = 0;
  printf("t = %d, f = %d\n", t, f);
}
