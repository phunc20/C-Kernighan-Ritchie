#include <stdio.h>

/* convert strings consisting entirely of digits like "1900066890"
 * to the same number but in type int.
 */
int atoi(char s[]) {
  int i, n;

  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
    n = n*10 + (s[i] - '0');
  }
  return n;
}

int main(int argc, char **argv) {
  char s[] = "1900066890";
  //printf("atoi(\"%s\") = %d\n", atoi("1900066890"));
  printf("atoi(\"%s\") = %d\n", s, atoi(s));
  &s = "139A Vũ Tùng, P.2, Q. BT";
  printf("atoi(\"%s\") = %d\n", s, atoi(s));
}
