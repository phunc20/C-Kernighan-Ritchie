#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int htoi(char s[]) {
  int res = 0;
  int len = strlen(s);
  char c;
  int i;
  //for (i=0; s[i] != '\0'; ++i) {
  //}
  for (i=len; i >= 0; --i) {
    res += 1;
  }
  return res;
}

int main(int argc, char **argv) {
  char c = 'a';
  printf("(int) %c = %d\n", c, (int) c); 
  return 0;
}
