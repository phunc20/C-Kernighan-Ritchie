#include <stdio.h>
#include <string.h>

/* ASCII upper-case char to lower-case char
 */
int lower(int c) {
  return (c >= 'A' && c <= 'Z') ?  (c - 'A' + 'a') : c;
}

int main(int argc, char **argv) {
  char t = 'A';
  for (; t <= 'Z'; ++t) {
    printf("lower('%c') = '%c'\n", t, lower(t));
  }
  for (t = 'a'; t <= 'z'; ++t) {
    printf("lower('%c') = '%c'\n", t, lower(t));
  }
  t = '?';
  printf("lower('%c') = '%c'\n", t, lower(t));
  return 0;
}
