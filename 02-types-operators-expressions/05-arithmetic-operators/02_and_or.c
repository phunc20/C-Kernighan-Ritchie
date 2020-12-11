#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

int main()
{
  int year = 400;
  printf("((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) = %d, when year = %d\n", (year % 4 == 0 && year % 100 != 0) || year % 400 == 0, year);
  printf("(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)   = %d, when year = %d\n", year % 4 == 0 && year % 100 != 0 || year % 400 == 0, year);
  printf("\n");

  year = 37;
  printf("((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) = %d, when year = %d\n", (year % 4 == 0 && year % 100 != 0) || year % 400 == 0, year);
  printf("(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)   = %d, when year = %d\n", year % 4 == 0 && year % 100 != 0 || year % 400 == 0, year);
  printf("\n");
  
  year = 8;
  printf("((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) = %d, when year = %d\n", (year % 4 == 0 && year % 100 != 0) || year % 400 == 0, year);
  printf("(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)   = %d, when year = %d\n", year % 4 == 0 && year % 100 != 0 || year % 400 == 0, year);
  printf("\n");

  year = 100;
  printf("((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) = %d, when year = %d\n", (year % 4 == 0 && year % 100 != 0) || year % 400 == 0, year);
  printf("(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)   = %d, when year = %d\n", year % 4 == 0 && year % 100 != 0 || year % 400 == 0, year);

  return 0;
}
