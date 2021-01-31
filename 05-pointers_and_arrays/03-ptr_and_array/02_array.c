#include <stdio.h>
//#include <string.h>

int main(int argc, char **argv) {
  char a[30] = "Danke, Welt.";
  char *pa1 = &a[0];
  char *pa2 = a;
  printf(
  "char a[30] = \"Danke, Welt.\";"
  "\n"
  "char *pa1 = &a[0];"
  "\n"
  "char *pa2 = a;"
  "\n"
  "\n"
  );

  printf("a     = %p(%%p)\n", a);
  printf("&a[0] = %p(%%p)\n", &a[0]);
  printf("pa1   = %p(%%p)\n", pa1);
  printf("pa2   = %p(%%p)\n", pa2);
  printf("\n");

  printf("a     = %d(%%d)\n", a);
  printf("&a[0] = %d(%%d)\n", &a[0]);
  printf("pa1   = %d(%%d)\n", pa1);
  printf("pa2   = %d(%%d)\n", pa2);

  return 0;
}


