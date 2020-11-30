#include <stdio.h>

main() {
  char c;
  // Note that we used char as type.

  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}


