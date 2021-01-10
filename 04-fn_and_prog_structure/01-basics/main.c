#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#define MAXLEN 1000    /* maximum input line length */
#define MAXLEN 8    /* maximum input line length */

int getligne(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

/* find all lines matching pattern */
main() {
  char line[MAXLEN];
  int found = 0;  // keep track of (# matching lines)

  /* Note that getligne() returns 0 iff the very first
   * char from stdin is EOF.
   */
  while (getligne(line, MAXLEN) > 0)
    if (strindex(line, pattern) >= 0) {
      printf("%s", line);
      found++;
    }
  return found;
}
