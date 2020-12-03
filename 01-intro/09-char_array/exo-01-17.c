#include <stdio.h>
#define THRESLEN 80 // We will print input lines whose length >= THRESLEN
#define MAXLEN 1000

int getligne(char line[], int maxlen);  // Rmk. There seems to already be a function named `getline` in stdio.h, so we renamed `getligne`


int main() {
  int len;
  char line[MAXLEN];     // current input line

  while ((len = getligne(line, MAXLEN)) > 0)
    if (len >= THRESLEN)
      printf("len = %3d: %s", len, line);
  return 0;
}


int getligne(char s[], int maxlen) {
  /* Get a line from stdin
   * args:
   *   s, the string into which we save the obtained line
   *   maxlen, the maximum tolerated length of a line
   *
   * return:
   *   length of the current line
   *
   * N.B. We shall mark the end of a string by '\0', which implies
   * that our line never reaches a length of maxlen
   */
  int i, c;
  for (i=0; i < maxlen-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = '\n';
    ++i;
  }
  // Also note that if MAXLEN equals 5 and current line equals "abcd\n" then s would be constructed as "abcd\0".
  // That is, any line with lenght >= MAXLEN, will be truncated there with its last char replaced by '\0'.
  s[i] = '\0';
  return i;
}
