#include <stdio.h>
#define VTAB '\013'
#define BELL '\007'
#define XVTAB '\xb'
#define XBELL '\x7'

int main() {
	printf("VTAB = %%c: %c(marking the tab)\n", VTAB);
	printf("VTAB = %%d: %d\n", VTAB);
	printf("11 = %%c: %c(marking the tab)\n", 11);
	printf("XVTAB = %%c: %c(marking the tab)\n", XVTAB);
	printf("XVTAB = %%d: %d\n", XVTAB);

	printf("\n");

	printf("BELL = %%c: %c(marking the bell)\n", BELL);
	printf("BELL = %%d: %d\n", BELL);
	printf("7 = %%c: %c(marking the bell)\n", 7);
	printf("XBELL = %%c: %c(marking the bell)\n", XBELL);
	printf("XBELL = %%d: %d\n", XBELL);
}
