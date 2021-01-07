#include <stdio.h>
#include <stdlib.h>
#include "../utils.h"

#define LEN 999

int main(int argc, char **argv) {
	int n;

	n = 1<<31;
	char s[LEN];
  itoa(n, s);
	printf("n = 1<<31;");
	printf("\n");
  printf("n = %d\n", n);
  printf("-n = %d\n", -n);
  printf("(-n)/10 = %d\n", (-n)/10);
  printf("-n/10 = %d\n", -n/10);
  printf("n/10 = %d\n", n/10);
  printf("((int)-n)/10 = %d\n", ((int)-n)/10);
  printf("((int)-n)/((int)10) = %d\n", ((int)-n)/((int)10));
  printf("-(n/10) = %d\n", -(n/10));
  printf("(n/10) = %d\n", (n/10));
  printf("n %% 10 + '0' = %c\n",n % 10 + '0');
  printf("s = %s\n", s);
	printf("\n");

	n = (1<<31) + 1;
  itoa(n, s);
	printf("n = (1<<31) + 1;");
	printf("\n");
  printf("n = %d\n", n);
  printf("-n = %d\n", -n);
  printf("(-n)/10 = %d\n", (-n)/10);
  printf("s = %s\n", s);
	printf("\n");

  return 0;
}
