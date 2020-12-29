#include <stdio.h>
#include "my_strcat.h"

int main(int argc, char **argv) {
  char s[50] = "It rains";
  char t[50] = "cats and dogs!";
  my_strcat(s, t);
  printf("my_strcat(s, t); gives: s = %s\n", s);
  return 0;
}
