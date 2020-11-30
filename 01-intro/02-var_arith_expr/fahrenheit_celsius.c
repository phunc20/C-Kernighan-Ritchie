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
    // N.B. We don't write (5/9) * (fahr - 32) because that would be 0 * (fahr - 32)
    printf("(%03d) %3d F\t%d C\n", counter, fahr, celsius);
    fahr = fahr + step;
    counter += 1;
  }
}
