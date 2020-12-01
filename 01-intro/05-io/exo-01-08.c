#include <stdio.h>

int main() {
  int c, nb, nt, nl;

  nb = 0;
  nt = 0;
  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
    else if (c == '\t')
      ++nt;
    else if (c == ' ')
      ++nb;
  printf("\nnb = %d\n", nb);
  printf("nt = %d\n", nt);
  printf("nl = %d\n", nl);
}
