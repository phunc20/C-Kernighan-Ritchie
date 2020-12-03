#include <stdio.h>
//#define MAXLEN 1_000

// This program is to test whether we can write large int as, say 1_000 for one thousand

int main() {
  //printf("%d\n", MAXLEN);  // This is illegal

  int c = 1_000;
  printf("%d\n", c); // illegal, too.
  return 0;
}

