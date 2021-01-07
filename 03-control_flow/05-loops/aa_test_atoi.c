#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv) {
	printf("atoi(\"      -1000\") = %d\n", atoi("      -1000"));
	printf("atoi(\"      +1000\") = %d\n", atoi("      +1000"));
	printf("atoi(\"      1000\") = %d\n", atoi("      1000"));
	printf("atoi(\"   -   1000\") = %d\n", atoi("   -   1000"));
	printf("atoi(\"  3.1415\") = %d\n", atoi("  3.1415"));
  return 0;
}
