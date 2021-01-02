#include <stdio.h>
#include "any.h"

int main(int argc, char **argv) {
  char s1[] = "The book on C programming written by Kernighan is an enjoyable reading.";
  char s2[] = "XYZ";
  printf("s1 = \"%s\"\n", s1);
  printf("s2 = \"%s\"\n", s2);
  int k = any(s1, s2);
  printf("any(s1, s2) = %d\n", k);

  return 0;
}
