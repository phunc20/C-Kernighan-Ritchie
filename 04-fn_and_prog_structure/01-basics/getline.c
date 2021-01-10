#include <stdio.h>

/* getline: get line into s, return length */
int getligne(char s[], int lim) {
  int c, i;
  i = 0;
  /* --lim \implies that (# iter) = (lim - 1)
   * Another implication: strlen(s) \leq lim. (with
   * the max happens when '\n' included, excluding '\0'.)
   */
  while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
    s[i++] = c;
  if (c = '\n')
    s[i++] = '\n';
  s[i] = '\0';
  // return strlen(s), i.e. i
  return i;
}









