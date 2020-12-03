#include <stdio.h>

int main() {
  char str[7];
  str[0] = 'a';
  str[1] = 'b';
  str[2] = 'c';
  str[3] = '\0';
  printf("str = %s", str);
  return 0;
}

