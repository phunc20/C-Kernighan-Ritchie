#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv) {
	char s[] = "Handsome is as handsome does.";

	printf("char s[] = \"Handsome is as handsome does.\";");
	printf("\n");

	reverse(s);
	printf("reverse(s);");
	printf("\n");
	printf("s = \"%s\"\n", s);
  return 0;
}
