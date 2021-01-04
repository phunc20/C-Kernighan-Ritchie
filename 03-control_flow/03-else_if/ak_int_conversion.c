#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int decapitaled = RAND_MAX;
  int deheaded = (int) RAND_MAX;
  printf("int decapitaled = RAND_MAX;\n");
  printf("int deheaded = (int) RAND_MAX;\n");
  printf("RAND_MAX = %ld\n", RAND_MAX);
  printf("decapitaled = %d\n", decapitaled);
  printf("deheaded = %d\n", deheaded);
  printf("(1<<31)-1 = %d\n", (1<<31)-1);
  return 0;
}




