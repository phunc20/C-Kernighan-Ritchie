```bash
[phunc20@homography-x220t 02-var_arith_expr]$ cat fahrenheit_celsius.c
#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300
 */

main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  int counter = 1;
  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    printf("(%03d) %3d F\t%d C\n", counter, fahr, celsius);
    fahr = fahr + step;
    counter += 1;
  }
}
[phunc20@homography-x220t 02-var_arith_expr]$ gcc fahrenheit_celsius.c
fahrenheit_celsius.c:7:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    7 | main()
      | ^~~~
[phunc20@homography-x220t 02-var_arith_expr]$ ./a.out
(001)   0 F     -17 C
(002)  20 F     -6 C
(003)  40 F     4 C
(004)  60 F     15 C
(005)  80 F     26 C
(006) 100 F     37 C
(007) 120 F     48 C
(008) 140 F     60 C
(009) 160 F     71 C
(010) 180 F     82 C
(011) 200 F     93 C
(012) 220 F     104 C
(013) 240 F     115 C
(014) 260 F     126 C
(015) 280 F     137 C
(016) 300 F     148 C
[phunc20@homography-x220t 02-var_arith_expr]$
```
