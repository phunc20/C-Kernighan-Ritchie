#include <stdio.h>

main() {
  int c;
  // Note that we used int as type.

  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}


