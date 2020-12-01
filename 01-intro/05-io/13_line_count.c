#include <stdio.h>

int main() {
  int c, nl; // nl stands for "Num Lines", c the char captured

  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
  printf("\nnl = %d\n", nl);
}
