#include <stdio.h>
#include "squeeze.h"

int main(int argc, char **argv) {
  char s[50] = "It rains cats and dogs!";
  char c = 's';
  squeeze(s, c);
  printf("squeeze(s, c) gives: s = %s\n", s);
  return 0;
}
