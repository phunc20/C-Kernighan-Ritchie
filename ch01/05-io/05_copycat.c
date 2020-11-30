#include <stdio.h>

main() {
  int c;
  // Note that we used int as type.

  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}
