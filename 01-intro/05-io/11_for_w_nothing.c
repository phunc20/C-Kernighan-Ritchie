#include <stdio.h>

main() {
  double nc; // nc stands for "Num Char"

  for (nc = 0; getchar() != EOF; ++nc)
  printf("\nnc = %.0f\n", nc);
}
