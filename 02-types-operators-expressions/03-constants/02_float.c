#include <stdio.h>

int main() {
	printf("123.4 = %f\n", 123.4);
	printf("1e-2 = %f\n", 1e-2);
	printf("123.4e-2 = %f\n", 123.4e-2);
	// By default the aboves are of type double
	printf("123.4f = %f\n", 123.4f);
	printf("1e-2F = %f\n", 1e-2F);
	//printf("123.4e-2lf = %f\n", 123.4e-2lf);  // Wrong!
	printf("123.4e-2l = %f\n", 123.4e-2l);
	//printf("123.456789e-2LF = %f\n", 123.456789e-2LF);  // Wrong!
	printf("123.456789e-2L = %f\n", 123.456789e-2L);
}
