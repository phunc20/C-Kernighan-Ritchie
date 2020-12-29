#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int htoi(char s[]) {
  //long int res = 0;
  //int len = strlen(s);
  //char c;
  //int i;
  //int increment;
  //long int power;
  //// i >= 2 because, e.g. "0xFFFF", the first two digits are just indicator.
  //for (i=len-1; i >= 2; --i) {
  //  c = s[i];
  //  power = pow(16, (len-1)-i);
  //  if (isdigit(c)) {
  //    increment = (c - '0') * power;
  //  }
  //  else {
  //    c = tolower(s[i]);
  //    increment = (c - 'a' + 10) * power;
  //  }
  //  res += increment;
  //}
  //return res;
  char *ptr;
  long res;
  res = strtol(s, &ptr, 10);
  return res;
}

int main(int argc, char **argv) {
  char s[] = "0xa9";
  printf("htoi(%s) = %d\n", s, htoi(s)); 
  return 0;
}
