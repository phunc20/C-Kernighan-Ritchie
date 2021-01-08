#include <stdio.h>
#include <stdlib.h>
#include "../utils.h"

#define LEN 999

int main(int argc, char **argv) {
	int n;

	n = 1<<31;
	char s[LEN];
  itoa_fixed2(n, s);
	printf("n = 1<<31;");
	printf("\n");
  printf("n = %d\n", n);
  printf("s = %s\n", s);
	printf("\n");

	n = (1<<31) + 1;
  itoa_fixed2(n, s);
	printf("n = (1<<31) + 1;");
	printf("\n");
  printf("n = %d\n", n);
  printf("s = %s\n", s);
	printf("\n");

	n = (1<<31) - 1;
  itoa_fixed2(n, s);
	printf("n = (1<<31) - 1;");
	printf("\n");
  printf("n = %d\n", n);
  printf("s = %s\n", s);
	printf("\n");

	n = 0;
  itoa_fixed2(n, s);
	printf("n = 0;");
	printf("\n");
  printf("n = %d\n", n);
  printf("s = %s\n", s);
	printf("\n");

  return 0;
}
