#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv) {
	int n;
	n = 1<<31;
	printf("n = 1<<31;\n");
  printf("n = %d\n", n);
  printf("-n = %d\n", -n);
  printf("(-n)/10 = %d\n", (-n)/10);
  printf("-n/10 = %d\n", -n/10);
  printf("n/10 = %d\n", n/10);
  printf("((int)-n)/10 = %d\n", ((int)-n)/10);
  printf("((int)-n)/((int)10) = %d\n", ((int)-n)/((int)10));
  printf("-(n/10) = %d\n", -(n/10));
  printf("(n/10) = %d\n\n", (n/10));

	int k = -n;
	printf("int k = -n;\n");
  printf("k = %d\n", k);
  printf("k/10 = %d\n\n", k/10);

  printf("INT_MIN = %d\n", INT_MIN);
  printf("-INT_MIN = %d\n", -INT_MIN);
  printf("INT_MIN/10 = %d\n", INT_MIN/10);
  printf("-INT_MIN/10 = %d\n", -INT_MIN/10);
  printf("(-INT_MIN)/10 = %d\n\n", (-INT_MIN)/10);

	n = (1<<31) + 1;
	printf("n = (1<<31) + 1;\n");
  printf("n = %d\n", n);
  printf("-n = %d\n", -n);
  printf("(-n)/10 = %d\n", (-n)/10);
  printf("-n/10 = %d\n", -n/10);
  printf("n/10 = %d\n", n/10);
  printf("((int)-n)/10 = %d\n", ((int)-n)/10);
  printf("((int)-n)/((int)10) = %d\n", ((int)-n)/((int)10));
  printf("-(n/10) = %d\n", -(n/10));
  printf("(n/10) = %d\n\n", (n/10));

	return 0;
}
