#include <stdio.h>
#include "../utils.h"

#define LENGTHY 999

int main(int argc, char **argv) {
  char s1[] = "-Za-Z -9, before this are rubbish; 0-w is also rubbish; a-z lower-case; M-W upper-case; 0-5 is shorter than 2-9.";
  char s2[LENGTHY];
  expand(s1, s2);
  printf("char s1[] = \"-Za-Z -9, before this are rubbish; 0-w is also rubbish; a-z lower-case; M-W upper-case; 0-5 is shorter than 2-9.\";\n");
  printf("s2        = \"%s\"\n", s2);
  return 0;
}
