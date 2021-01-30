#include <stdio.h>

int main(int argc, char **argv) {
  int one(void) {
    int two(void) {
      return 2;
    }
    return two() - 1;
  }
  printf("one() = %d\n", one());
  return 0;
}
