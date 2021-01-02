#include <stdio.h>
#include "squeeze.h"

int main(int argc, char **argv) {
  char s1[] = "The book on C programming written by Kernighan is an enjoyable reading.";
  char s2[] = "T pqrs onandoff upanddown";
  printf("s1 = \"%s\"\n", s1);
  printf("s2 = \"%s\"\n", s2);
  squeeze(s1, s2);
  printf("After squeeze(s1, s2), s1 = \"%s\"\n", s1);

  return 0;
}
