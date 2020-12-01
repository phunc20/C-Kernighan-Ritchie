#include <stdio.h>

main() {
  double nc; // nc stands for "Num Char"

  for (nc = 0; getchar() != EOF; ++nc)
    ; // N.B. This semicolon means "there is nothing in the body of the for loop"
  printf("\nnc = %.0f\n", nc);
}
