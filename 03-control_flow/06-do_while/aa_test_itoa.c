#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define LEN 999

int main(int argc, char **argv) {
	int n;

	n = -17795;
	char s[LEN];
  itoa(n, s);
	printf("n = -17795;");
	printf("\n");
  printf("s = %s\n", s);
	printf("\n");

	n = +1234;
  itoa(n, s);
	printf("n = +1234;");
	printf("\n");
  printf("s = %s\n", s);
	printf("\n");

	n = 9876;
  itoa(n, s);
	printf("n = 9876;");
	printf("\n");
  printf("s = %s\n", s);
	printf("\n");

  return 0;
}
