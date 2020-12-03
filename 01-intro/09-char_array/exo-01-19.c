#include <stdio.h>
#define MAXLEN 1000

/* Description:
 * Write a function reverse(s) that reverses the char string s.
 * Use it to write a program that reverses its input a line at a time.
 */

int getligne(char line[], int maxlen);
int length(char s[]);
void reverse(char s[]);  // reverse s in place

int main() {
  int len;
  char line[MAXLEN];      // current input line

  while ((len = getligne(line, MAXLEN)) > 0) {
    reverse(line);
    int start_index;
    if (line[0] == '\n')
      start_index = 1;
    else
      start_index = 0;
    int j;
    for (j=start_index; j < len; ++j)
      putchar(line[j]);
    if (start_index == 1)
      putchar('\n');
  }
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

void reverse(char s[]) {
  int k;
  int len = length(s);
  char tmp;
  // Each time we swap the j-th and (len - k)-th element
  for (k = len - 1; k >= len / 2; --k) {
    tmp = s[k];
    s[k] = s[len - 1 - k];
    s[len - 1 - k] = tmp;
  }
}
