#include <stdio.h>

int main() {
	printf("In C,\n");
	if (2 == 2.0)
	  printf("2 equals 2.0\n");
	else
	  printf("2 is not equal to 2.0\n");

	if (2.0 == 2)
	  printf("2.0 equals 2\n");
	else
	  printf("2.0 is not equal to 2\n");

	int c = 2;
	printf("int c = 2;\n");
	if (c == 2.0)
	  printf("c equals 2.0\n");
	else
	  printf("c is not equal to 2.0\n");

	float d = 2.0;
	printf("float d = 2.0;\n");
	if (d == 2)
	  printf("d equals 2\n");
	else
	  printf("d is not equal to 2\n");
}
