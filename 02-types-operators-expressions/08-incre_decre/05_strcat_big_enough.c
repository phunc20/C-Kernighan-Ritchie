#include <stdio.h>
#include "strcat.h"

int main(int argc, char **argv) {
  char s[50] = "It rains";
  char t[50] = "cats and dogs!";
  strcat(s, t);
  printf("strcat(s, t); gives: s = %s\n", s);
  return 0;
}
