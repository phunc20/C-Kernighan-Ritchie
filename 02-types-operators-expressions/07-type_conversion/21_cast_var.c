#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
  int n = 10;
  printf("int n = 10;\n");
  printf("printf(\"%%f\\n\", (double) n); gives ");
  printf("%f\n", (double) n);
  printf("printf(\"%%d\\n\", n); gives ");
  printf("%d\n", n);
  printf("printf(\"%%f\\n\", n); gives ");
  printf("%f\n", n);
  return 0;
}
