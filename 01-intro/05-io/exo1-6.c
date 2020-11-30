#include <stdio.h>

int main() {
  //int res = getchar() != EOF;
  printf("getchar() != EOF equals %d,\ngetchar() != 'A' equals %d\n", getchar() != EOF, getchar() != 'A');
}
