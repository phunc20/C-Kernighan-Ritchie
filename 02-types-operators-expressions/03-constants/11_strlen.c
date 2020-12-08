#include <stdio.h>
#include <string.h>

int main() {
	printf("strlen(\"\") = %d\n", strlen(""));
	printf("strlen(\"x\") = %d\n", strlen("x"));
	printf("strlen(\"Hello,\" \" world\") = %d\n", strlen("Hello," " world"));
}
