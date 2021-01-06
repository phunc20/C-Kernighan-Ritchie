#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv) {
  char s[] = "Tab is  \t, newline is \nBut escape like \\n and \\t don't count\nYeah\tyooh!\n";
  printf("s = %s\n", s);
  char t[sizeof(s)/sizeof(char)];
  escape(s, t);
  printf("t = %s\n", t);
  return 0;
}
