#include <stdio.h>

/* Description:
 * Write a program that prints its input one word per line.
 *
 * Idea:
 * Start of a word: print a newline and putchar
 * The 2nd or future char inside a word: just putchar
 * space,/t,/n: do nothing
 */

#define IN 1
#define OUT 0

int main() {
  int state, c;
  state = OUT;

  // ************************
  // * Solution01: Imperfect
  // ************************
  //while ((c = getchar()) != EOF) {
  //  if (c == ' ' || c == '\n' || c == '\t') {
  //    state = OUT;
  //  }
  //  else {
  //    if (state == OUT) {
  //      state = IN;
  //      printf("\n%c", c);
  //    }
  //    else
  //      putchar(c);
  //  }
  //}


  // ************************
  // * Solution 02: Bad
  // ************************
  // special case: The very first char is one of ' ', '\t', '\n'
  //c = getchar();
  //if (c != EOF) {
  //  if (c == ' ' || c == '\n' || c == '\t')
  //    ;
  //  else
  //    putchar(c);
  //}
  //else
  //  return 0;

  //while ((c = getchar()) != EOF) {
  //  if (c == ' ' || c == '\n' || c == '\t') {
  //    state = OUT;
  //  }
  //  else {
  //    if (state == OUT) {
  //      state = IN;
  //      printf("\n%c", c);
  //    }
  //    else
  //      putchar(c);
  //  }
  //}


  // ************************
  // * Solution03: Imperfect too, but best so far
  // ************************
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        putchar('\n');
      }
      state = OUT;
    }
    else {
      putchar(c);
      state = IN;
    }
  }


}
