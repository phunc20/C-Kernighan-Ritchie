#include <stdio.h>

main()
{
	// This program will never end, because the 2nd line i = 2 * i after while is not put in curly brackets
	int i = 1;
  int j = 10;
  while (i < j)
    printf("i = %d\n", i);
    i = 2 * i;
}
