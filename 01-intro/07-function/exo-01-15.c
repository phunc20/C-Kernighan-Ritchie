#include <stdio.h>

float celsius(float tempF);
float fahrenheit(float tempC);

int main()
{
  float fahr, cel;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  for (fahr=lower; fahr<=upper; fahr+=step) {
    cel = fahr;
    printf("%3.0f F %6.1f C", fahr, celsius(fahr));
    printf(" | ");
    printf("%3.0f C %6.1f F\n", cel, fahrenheit(cel));
  }
  return 0;
}


float celsius(float tempF) {
  return (tempF - 32.0) * (5.0/9.0);
}

float fahrenheit(float tempC) {
  return tempC*(9.0/5.0)  + 32.0;
}


