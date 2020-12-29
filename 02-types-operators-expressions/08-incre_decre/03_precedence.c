#include <stdio.h>

int main(int argc, char **argv) {
  int i;
  int j = 5;
  for (i = j = 0; i < 2; ++i) {
    printf("i = %d\n", i);
    printf("j = %d\n", j);
  }

  return 0;
}
