#include <stdio.h>

int main(int argc, char **argv) {
  char array[100] = "Danke, Welt.";
  char *ptr = (array + 7);  // suppposed to be "Welt."
  array++;
  printf("array = \"%s\"(%%s)\n", array);
  printf("ptr = \"%s\"(%%s)\n", ptr);
  return 0;
}


