#include <stdio.h>

/* strlength: return length of string s */
int strlength(char *s) {
  int n;
  for (n=0; *s != '\0'; s++)
    n++;
  return n;
}


int main(int argc, char **argv) {
  char array[100] = "Danke, Welt.";
  char *ptr1 = array;
  char *ptr2 = (array + 7);  // suppposed to be "Welt."
  printf("array = \"%s\"(%%s)\n", array);
  printf("ptr1 = \"%s\"(%%s)\n", ptr1);
  printf("ptr2 = \"%s\"(%%s)\n", ptr2);
  printf("\n");

  printf("strlength(\"hello, world\") = %d\n", strlength("hello, world"));
  printf("strlength(array) = %d\n", strlength(array));
  printf("strlength(ptr1) = %d\n", strlength(ptr1));
  printf("strlength(ptr2) = %d\n", strlength(ptr2));
  return 0;
}


