#include <stdio.h>
#include <string.h>
//#include <ctype.h>

int main(int argc, char **argv) {
  char t = 'A';
  for (; t <= 'Z'; ++t) {
    printf("tolower('%c') = '%c'\n", t, tolower(t));
  }
  for (t = 'a'; t <= 'z'; ++t) {
    printf("tolower('%c') = '%c'\n", t, tolower(t));
  }
  t = 'Ế';
  printf("tolower('%c') = '%c'\n", t, tolower(t));
  return 0;
}
