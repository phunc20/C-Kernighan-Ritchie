#include <stdio.h>

main()
{
	// This program will properly end when the power of 2 exceeds 10, i.e. at 16.
	int i = 1;
  int j = 10;
  while (i < j)
    i = 2 * i;
  printf("i = %d\n", i);
}
