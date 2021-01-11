#include <stdio.h>
#include "utils.h"

int main() {
	char s[100] = "-31.495";
  printf("atof(%s) = %f\n", s, atof(s));
  printf("another_atof(%s) = %f\n", s, another_atof(s));
	printf("\n");

	char t[100] = ".495";
  printf("atof(%s) = %f\n", t, atof(t));
  printf("another_atof(%s) = %f\n", t, another_atof(t));
	printf("\n");

	char u[100] = "+1234.5678";
  printf("atof(%s) = %f\n", u, atof(u));
  printf("another_atof(%s) = %f\n", u, another_atof(u));
	printf("\n");

	char v[100] = "2,71828";
  printf("atof(%s) = %f\n", v, atof(v));
  printf("another_atof(%s) = %f\n", v, another_atof(v));
}
