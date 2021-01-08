#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv) {
	int n;
	n = 1<<31;
	printf("n = 1<<31 = %d\n", n);
  printf("n/10 = %d\n", n/10);
  printf("n%10 = %d\n", n%10);
	printf("\n");

	n = (1<<31) + 1;
	printf("n = (1<<31) + 1 = %d\n", n);
  printf("n/10 = %d\n", n/10);
  printf("n%10 = %d\n", n%10);
	printf("\n");

	n = -10;
	printf("n = -10;\n");
  printf("n/10 = %d\n", n/10);
  printf("n%10 = %d\n", n%10);
	printf("\n");

	n = -13;
	printf("n = -13;\n");
  printf("n/10 = %d\n", n/10);
  printf("n%10 = %d\n", n%10);
	printf("\n");

	n = -7;
	printf("n = -7;\n");
  printf("n/10 = %d\n", n/10);
  printf("n%10 = %d\n", n%10);
	printf("\n");

	return 0;
}
