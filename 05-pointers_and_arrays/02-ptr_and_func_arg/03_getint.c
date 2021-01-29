#include <stdio.h>
#include <ctype.h>

/* cf. Section 4.3 in case you forget what getch() and ungetch() do. */
int getch(void);
void ungetch(int);

/* getint: get next integer from input into *pn */
int getint(int *pn) {
  int c, sign;

  while (isspace(c = getch()))  /* skip white spaces */
    ;
  if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
    /* That is, if the first non-white-space char is not a digit, neither an EOF, neither a -/+ */
    ungetch(c);
    return 0;
  }
  sign = (c == '-') ? -1 : 1;
  if (c == '+'  || c == '-')  // Having dealt with sign, we can move on to the next char if the current one is +/-
    c = getch();
  for (*pn = 0; isdigit(c); c = getch())
    *pn = 10 * *pn + (c - '0');
  *pn *= sign;
  if (c != EOF)
    ungetch(c);
  return c;
}

int main(int argc, char **argv) {
  int n, array[SIZE], getint(int *);

  for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
    ;
  return 0;
}











