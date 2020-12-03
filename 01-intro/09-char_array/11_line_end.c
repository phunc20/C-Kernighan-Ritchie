#include <stdio.h>
#define MAXLEN 1000  // maximum tolerated line length

int length(char s[]);
int getligne(char line[], int maxlen);


int main() {
  int len;
  char line[MAXLEN];     // current input line
  char longest[MAXLEN];  // longest line so far

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

int length(char s[]) {
  int i;
  for (i = 0; s[i] != '\0'; ++i)
    ;
  return i;
}
