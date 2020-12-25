#include <stdio.h>

int main(int argc, char **argv) {
  int i = 0b11111111;
  char c = 0b10001;
  printf("sizeof(i) = %zu\n", sizeof(i));
  printf("sizeof(c) = %zu\n", sizeof(c));

  return 0;
}
