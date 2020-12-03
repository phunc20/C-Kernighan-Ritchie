#include <stdio.h>
#define MAXLEN 1000

/* Description:
 * Write a program to remove trailing blanks and tabs from each line of input,
 * and to delete entirely blank lines.
 */

int getligne(char line[], int maxlen);
void rtrim(char line[], char trimmed[]);  // rtrim for "Right TRim"
int length(char s[]);

int main() {
  int len;
  char line[MAXLEN];      // current input line
  char rtrimmed[MAXLEN];

  while ((len = getligne(line, MAXLEN)) > 0) {
    rtrim(line, rtrimmed);
    if (rtrimmed[0] == '\0')
      ;
    else {
      printf(rtrimmed);
    }
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

void rtrim(char line[], char trimmed[]) {
  /* Let's just assume that the two last element of line are '\n' and '\0';
   * otherwise, the situation is a bit complicated.
   */
  int k = length(line);
  int i;
  //i = k - 3;
  // It's k-2 because length() does not include the null character
  i = k - 2;
  while (i >= 0 && line[i] == ' ' || line[i] == '\t' || line[i] == '\n')
    --i;
  //printf("i = %d\n", i);
  if (i < 0)  // i.e. no non-white char found
    trimmed[0] = '\0';
  else {
    int j;
    for (j = 0; j <= i; ++j)
      trimmed[j] = line[j];
    trimmed[i+1] = '\n';
    trimmed[i+2] = '\0';
  }
  //printf(trimmed);
}

int length(char s[]) {
  int i;
  for (i = 0; s[i] != '\0'; ++i)
    ;
  return i;
}
