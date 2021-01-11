#include <stdio.h>

int main() {
	char s[100];
	s = "-31.495";
  printf("atof(%s) = %f\n", s, atof(s));
}
