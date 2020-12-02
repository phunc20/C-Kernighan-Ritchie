#include <stdio.h>
#include <stdbool.h>

int main()
{
  bool t = true;
  // I have intentionally chosen acc to be char to show the overflow,
  // i.e. the number will grow larger and larger and then all of a sudden
  // turn into negative.
  for (char acc=0; t; ++acc)
    printf("acc = %d\n", acc);
}
