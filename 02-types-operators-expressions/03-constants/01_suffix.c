#include <stdio.h>

int main() {
	printf("integer 123456789 = %d (Too long will be automatically converted into long)\n", 123456789);
	printf("long integer 123456789L = %d\n", 123456789L);
	printf("unsigned integer 11U = %d\n", 11U);
	printf("unsigned integer 11u = %d\n", 11u);
	printf("unsigned integer 88888888ul = %d\n", 88888888ul);
}



