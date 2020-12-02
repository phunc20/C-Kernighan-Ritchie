#include <stdio.h>

int main() {
  int c;
  for (c='a'; c<='z'; ++c)
    printf("%c = %3d\n", c, c);
  for (c='A'; c<='Z'; ++c)
    printf("%c = %3d\n", c, c);
  for (c='0'; c<='9'; ++c)
    printf("%c = %3d\n", c, c);
  c = '!';
  printf("%c = %3d\n", c, c);
  c = '#';
  printf("%c = %3d\n", c, c);
  c = '&';
  printf("%c = %3d\n", c, c);
  c = '*';
  printf("%c = %3d\n", c, c);
  c = '(';
  printf("%c = %3d\n", c, c);
  c = ')';
  printf("%c = %3d\n", c, c);
  c = '-';
  printf("%c = %3d\n", c, c);
  c = '+';
  printf("%c = %3d\n", c, c);
  c = '=';
  printf("%c = %3d\n", c, c);
  c = '{';
  printf("%c = %3d\n", c, c);
  c = '}';
  printf("%c = %3d\n", c, c);
  c = '|';
  printf("%c = %3d\n", c, c);
  c = ',';
  printf("%c = %3d\n", c, c);
  c = '.';
  printf("%c = %3d\n", c, c);
  c = '<';
  printf("%c = %3d\n", c, c);
  c = '>';
  printf("%c = %3d\n", c, c);
  c = '"';
  printf("%c = %3d\n", c, c);
  c = '\'';
  printf("%c = %3d\n", c, c);
  c = ':';
  printf("%c = %3d\n", c, c);


}
