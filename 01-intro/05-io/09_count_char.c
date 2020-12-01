#include <stdio.h>

main() {
  long nc; // nc stands for "Num Char"

  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("\nnc = %ld\n", nc); // Note the %ld is an "L" not a "1" (for printing long)
}
