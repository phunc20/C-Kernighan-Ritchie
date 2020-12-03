#include <stdio.h>
#define MAXLEN 1000  // maximum tolerated line length

int getligne(char line[], int maxlen);  // Rmk. There seems to already be a function named `getline` in stdio.h, so we renamed `getligne`
void copy(char to[], char from[]);


int main() {
  int len, max_sofar;
  char line[MAXLEN];     // current input line
  char longest[MAXLEN];  // longest line so far

  max_sofar = 0;
  while ((len = getligne(line, MAXLEN)) > 0)
    if (len > max_sofar) {
      max_sofar = len;
      copy(longest, line);
    }
  if (max_sofar > 0)
    printf("%s", longest);
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
  // In case we exit the for loop because c == '\n', we need to include that char as well
  // (?1) Shouldn't we make sure as well that i != maxlen - 1?
  // I mean, it's likely that c == '\n' and i = maxlen - 1, no?
  // (R1) No. If c == '\n', we would have exited the for loop without incrementing i.
  // That is,
  // - either c == '\n'
  // - or i >= maxlen - 1. But never would they happen at the same time.
  if (c == '\n') {
    s[i] = '\n';
    ++i;
  }
  // Also note that if MAXLEN equals 5 and current line equals "abcd\n" then s would be constructed as "abcd\0".
  // That is, any line with lenght >= MAXLEN, will be truncated there with its last char replaced by '\0'.
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
