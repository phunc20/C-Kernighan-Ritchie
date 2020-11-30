#include <stdio.h>

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  //fahr = lower;
  // The following two lines are actually wrong: You cannot convert lower into a float this way.
  //fahr = float lower;
  //fahr = float(lower);
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    // We could have just written farh - 32 instead of fahr - 32.0, 32 will simply be converted to float.
    printf("%3.0f F %6.1f C\n", fahr, celsius);
    // %3.0 means "AT LEAST 3-character wide, w/o decimal pt, neither digits after decimal pt"
    // %6.1f means "AT LEAST 6-character wide in which one for decimal pt, another one for the digit after decimal pt"
    // More examples:
    // %6f, "at least 6 characters wide", e.g. 2.718281828 will be printed as is while 2.1 as "   2.1".
    // %.2f, "2 digits after the decimal pt (no constraint whatsoever on the width)"
    fahr = fahr + step;
  }
}
