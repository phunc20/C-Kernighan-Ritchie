#include <stdio.h>

int main() {
	printf("\\a = %%d: %d(mark)\n", '\a');
	printf("\\b = %%d: %d(mark)\n", '\b');
	printf("\\f = %%d: %d(mark)\n", '\f');
	printf("\\n = %%d: %d(mark)\n", '\n');
	printf("\\r = %%d: %d(mark)\n", '\r');
	printf("\\t = %%d: %d(mark)\n", '\t');
	printf("\\v = %%d: %d(mark)\n", '\v');
	printf("\\0 = %%d: %d(mark)\n", '\0');
}
