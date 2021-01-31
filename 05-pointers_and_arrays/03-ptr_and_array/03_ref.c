#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  char a[30] = "Danke, Welt.";
  char *pa = &a[0];
  printf(
  "char a[30] = \"Danke, Welt.\";"
  "\n"
  "char *pa = &a[0];"
  "\n"
  "\n"
  );

  int i;
  int len = strlen(a);
  for (i=0; i<len; ++i) {
    printf("a[%02d]     = %c(%%c)\n", i, a[i]);
    printf("*(a+%02d)   = %c(%%c)\n", i, *(a+i));
    printf("pa[%02d]    = %c(%%c)\n", i, pa[i]);
    printf("*(pa+%02d)  = %c(%%c)\n", i, *(pa+i));
    printf("(a+%02d)    = %p(%%p)\n", i, (a+i));
    printf("&a[%02d]    = %p(%%p)\n", i, &a[i]);
    printf("\n");
  }

  return 0;
}


