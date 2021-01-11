#include <stdio.h>
//#include "utils.h"
#define MAXLEN 100


/* rudimentary calculator */
int main() {
  int getligne(char [], int);
  double sum, atof(char []);
  char line[MAXLEN];

  sum = 0;
  while (getligne(line, MAXLEN) > 0)
    printf("\t%g\n", sum += atof(line));
}
