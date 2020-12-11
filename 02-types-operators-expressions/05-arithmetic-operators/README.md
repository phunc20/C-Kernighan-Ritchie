## Leap year
**(?)** Why not random?
```bash
[phunc20@homography-x220t 05-arithmetic-operators]$ gcc 01_leap_year.c
[phunc20@homography-x220t 05-arithmetic-operators]$ ./a.out
Year 1804289383 is not a leap year.
[phunc20@homography-x220t 05-arithmetic-operators]$ ./a.out
Year 1804289383 is not a leap year.
[phunc20@homography-x220t 05-arithmetic-operators]$ ./a.out
Year 1804289383 is not a leap year.
[phunc20@homography-x220t 05-arithmetic-operators]$ cat 01_leap_year.c
#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

int main()
{
  int year = rand();
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    printf("Year %d is a leap year.\n", year);
  else
    printf("Year %d is not a leap year.\n", year);

  return 0;
}
[phunc20@homography-x220t 05-arithmetic-operators]$
```

## and, or, parentheses
```bash
[phunc20@homography-x220t 05-arithmetic-operators]$ gcc 02_and_or.c
[phunc20@homography-x220t 05-arithmetic-operators]$ ./a.out
((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) = 1, when year = 400
(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)   = 1, when year = 400

((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) = 0, when year = 37
(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)   = 0, when year = 37

((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) = 1, when year = 8
(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)   = 1, when year = 8

((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) = 0, when year = 100
(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)   = 0, when year = 100
```

## associate left to right
```bash
[phunc20@homography-x220t 05-arithmetic-operators]$ gcc 03_associate_left_to_right.c
[phunc20@homography-x220t 05-arithmetic-operators]$ ./a.out
5 * 1 / 2 = 2
5 * (1 / 2) = 0
```
