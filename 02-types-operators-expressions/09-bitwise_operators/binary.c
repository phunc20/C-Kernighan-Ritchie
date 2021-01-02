#include <stdio.h>
#include <math.h>

#define MAX_NUM_BITS 128

// Bug!
void printb(int n) {
  while (n) {
    if (n & 1)
      printf("1");
    else
      printf("0");

    n >>= 1;
  }
  //printf("\n");
}

void printbb(int n) {
  char s[MAX_NUM_BITS];
  int i = 0;
  while (n) {
    if (n & 1) {
      s[i++] = '1';
    }
    else {
      s[i++] = '0';
    }
    n >>= 1;
  }
  s[i] = '\0';
  printf("(");
  for (int j=i-1; j>=0; --j) {
    printf("%c", s[j]);
  }
  printf(")_2");
}
