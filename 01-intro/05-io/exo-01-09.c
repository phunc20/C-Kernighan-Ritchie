#include <stdio.h>

main() {
  int c;

  //bool prev_is_blank = false;
  int prev_is_blank = 0;
  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      putchar(c);
      prev_is_blank = 0;
    }
    else {
      if (!prev_is_blank) {
        putchar(c);
        prev_is_blank = 1;
      }
    }
  }
}
