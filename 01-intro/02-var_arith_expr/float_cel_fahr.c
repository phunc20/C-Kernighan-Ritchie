#include <stdio.h>

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 100;
  step = 10;

  celsius = lower;
  printf("%10s %7s\n", "Fahrenheit", "Celsius");
  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * (celsius + 32.0);
    printf("%10.0f %7.1f \n", celsius, fahr);
    celsius = celsius + step;
  }
}
