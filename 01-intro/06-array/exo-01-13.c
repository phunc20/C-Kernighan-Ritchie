#include <stdio.h>

/* Description:
 * For each word, print its length so that the overall stdout becomes a histogram
 * 	
 * Idea:
 * - print word postpended by spaces to 16 spaces
 * - print (word length) # of ▮ upon encountering whites
 */

#define IN 1
#define OUT 0
#define MAXLEN 16

int main() {
  int i, state, c, len; // len for "length"
  state = OUT;
  len = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        for (i = 0; i < (MAXLEN - len); ++i)
          putchar(' ');
        for (i = 0; i < len; ++i)
          putchar('*');
        putchar('\n');
        len = 0;
      }
      state = OUT;
    }
    else {
      putchar(c);
      ++len;
      state = IN;
    }
  }
}
