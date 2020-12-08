#include <stdio.h>

int main() {
	printf("\\a = %%c: %c(mark)\n", '\a');
	printf("\\b = %%c: %c(mark)\n", '\b');
	printf("\\f = %%c: %c(mark)\n", '\f');
	printf("\\n = %%c: %c(mark)\n", '\n');
	printf("\\r = %%c: %c(mark)\n", '\r');
	printf("\\t = %%c: %c(mark)\n", '\t');
	printf("\\v = %%c: %c(mark)\n", '\v');
	printf("\\0 = %%c: %c(mark)\n", '\0');
}
