#include <stdio.h>
#include <string.h>
#include <ctype.h>

void internal_static_demo(void) {
  int i = 0;
  static int j = 0;
  i++;
  j++;
  printf("i = %d\n", i);
  printf("j = %d\n", j);
}

int main(int argc, char **argv) {
  printf("Calling internal_static_demo() three times inside main()...\n");
  internal_static_demo();
  internal_static_demo();
  internal_static_demo();
  return 0;
}
