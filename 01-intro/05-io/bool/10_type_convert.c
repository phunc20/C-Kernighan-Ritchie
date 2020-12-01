#include <stdio.h>
#include <stdbool.h>

int main()
{
  int t = 1024;
  int f = -3;
  t = true;
  f = false;
  printf("t = %d, f = %d\n", t, f);
  printf("sizeof(t) = %zu, sizeof(f) = %zu\n", sizeof(t), sizeof(f));
  // if the sizeof is that of an int, you can see the type of the resulting conversion.
}
