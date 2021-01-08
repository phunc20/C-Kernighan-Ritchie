#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv) {
	int n;
	n = 1<<31;
	printf("n = 1<<31;\n");
  printf("n = %d\n", n);
  printf("n/2 = %d\n", n/2);
  printf("n>>1 = %d\n", n>>1);
  printf("(110...0)_2 = %d\n", 0x3<<30);
  printf("\n");

	n = (1<<31) + 1;
	printf("n = (1<<31) + 1;\n");
  printf("n = %d\n", n);
  printf("n/2 = %d\n", n/2);
  printf("n>>1 = %d\n", n>>1);
  //printf("-n = %d\n", -n);
  //printf("(-n)/10 = %d\n", (-n)/10);
  //printf("-n/10 = %d\n", -n/10);
  //printf("n/10 = %d\n", n/10);
  //printf("((int)-n)/10 = %d\n", ((int)-n)/10);
  //printf("((int)-n)/((int)10) = %d\n", ((int)-n)/((int)10));
  //printf("-(n/10) = %d\n", -(n/10));
  //printf("(n/10) = %d\n\n", (n/10));

	return 0;
}
