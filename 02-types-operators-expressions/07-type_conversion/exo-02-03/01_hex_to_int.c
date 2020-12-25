#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int htoi(char s[]) {
  int n = (int) s;
  return n;
}

int main(int argc, char **argv) {
  char s[] = "0xa9";
  printf("htoi(%s) = %d\n", s, htoi(s)); 
  return 0;
}
