#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  char array[30] = "Danke, Welt.";
  char *ptr = &array[0];
  int len = strlen(array);
  int i;
  for (i=0; i<len; i++) {
    printf("ptr+%d    = %p\n", i, ptr+i);
    printf("*(ptr+%d) = %c\n", i, *(ptr+i));
    printf("\n");
  }
  return 0;
}


