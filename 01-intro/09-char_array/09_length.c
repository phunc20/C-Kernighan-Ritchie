#include <stdio.h>

int length(char s[]);

int main() {
  char line[4];
  line[0] = 'r';
  line[1] = 'e';
  line[2] = 'd';
  line[3] = '\0';
  //printf(length(line)); // can't printf(k) when k is an int.
  printf("length(line) = %d\n", length(line));
  return 0;
}

int length(char s[]) {
  int i;
  for (i = 0; s[i] != '\0'; ++i)
    ;
  return i;
}
