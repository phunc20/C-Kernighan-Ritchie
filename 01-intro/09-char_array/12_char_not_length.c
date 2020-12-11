#include <stdio.h>
#include <string.h>

int main() {
  char msg[] = "warning: ";
  int i = 0;
  putchar('^');
  while (msg[i] != '\0') {
    putchar(msg[i]);
    i += 1;
  }
  putchar('$');
  printf("\nmsg[%d] = \\0\n", i);
  printf("strlen(msg) = %d\n", strlen(msg));
  return 0;
}

