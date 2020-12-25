#include <stdio.h>

int main(int argc, char **argv) {
  if (-1L < 1U)
    printf("-1L < 1U\n");
  else
    printf("-1L >= 1U\n");

  if (-1L > 1UL)
    printf("-1L > 1UL\n");
  else
    printf("-1L <= 1UL\n");

  unsigned long i = -1;
  printf("unsigned long i = -1 when printed gives\ni = %d\n", i);

  return 0;
}
