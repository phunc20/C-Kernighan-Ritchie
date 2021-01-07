#include <stdio.h>

#define LEN 999

int main(int argc, char **argv) {
	int n;
	n = 1<<31;
  printf("(-n)/10 = %d\n", (-n)/10);
  return 0;
}
