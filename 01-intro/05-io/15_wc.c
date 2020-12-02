#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int c, nl, nw, nc, state;

  state = OUT;

  nl = nw = nc = 0; // Note how this is convenient.
  /* A note on this:
   * Remember the rule that "association from right to left" a few pages earlier?
   * It's the same here. Besides, an assignment (i.e. with `=`) is an expression
   * which returns a value. In other words, the above line of code is equiv. to
   * nl = (nw = (nc = 0));
   */



  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    // Every time the program encounters the first char of a word,
    // it counts for one more word.
    if (c == ' ' || c == '\n' || c == '\t') {
      // Note that the or in C is the same as in bash
      state = OUT;
    }
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  putchar('\n');
  printf("nl = %d\n", nl);
  printf("nw = %d\n", nw);
  printf("nc = %d\n", nc);
}
