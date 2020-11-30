#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20
// N.B. No need for a `;` at the end for the `#define`'s


main()
{
  int fahr;
  printf("%s %s\n", "Fahrenheit", "Celsius");
  for (fahr = LOWER; fahr <= UPPER;; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
