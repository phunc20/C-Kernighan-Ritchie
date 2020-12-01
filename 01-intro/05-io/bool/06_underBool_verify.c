#include <stdio.h>

int main()
{
  // In 04_underBool_still_fail.c, we failed probably because we shouldn't have used true and false, which exist only in <stdbool.h>
  bool t = 1;
  bool f = 0;
  printf("t = %d, f = %d\n", t, f);
}
