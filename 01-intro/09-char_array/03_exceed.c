#include <stdio.h>

int main() {
  char str[3];
  for (int i=0; i < 10; ++i)
    str[i] = 'a' + i;
  printf("str = %s\n", str);
  return 0;
}

