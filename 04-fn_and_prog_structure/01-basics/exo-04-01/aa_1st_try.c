#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 1000    /* maximum input line length */

///* Note that there are two r's in the function name:
// * The 2nd r for "right"
// */
//int strrindex(char s[], char t[]) {
//  int i,j,k;
//  int len_t = strlen(t);
//  int len_s = strlen(s);
//  for (i=len_s - len_t; i >= 0; i--) {
//    for (j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++)
//      ;
//    if (t[k] == '\0')
//      return i;
//  }
//  return -1;
//}

int getligne(char line[], int max);
//int strrindex(char s[], char t[]);

char pattern[] = "ould";

/* find all lines matching pattern */
int main() {
  char line[MAXLEN];
  int found = 0;  // keep track of (# matching lines)
  int index;

  /* Note that getligne() returns 0 iff the very first
   * char from stdin is EOF.
   */
  while (getligne(line, MAXLEN) > 0)
    if ((index = strrindex(line, pattern)) >= 0) {
      printf("%s", line);
      printf("%d\n", index);
      found++;
    }
  return found;
}



