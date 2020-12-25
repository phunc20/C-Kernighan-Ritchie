#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
  printf("printf(\"%%f\\n\", sqrt(2)); gives ");
  printf("%f\n", sqrt(2));
  printf("printf(\"%%d\\n\", sqrt(2)); gives ");
  printf("%d\n", sqrt(2));
  return 0;
}
