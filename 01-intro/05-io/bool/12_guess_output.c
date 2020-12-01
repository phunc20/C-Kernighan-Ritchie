#include <stdio.h>
#include <stdbool.h>

int main()
{
  bool t = true;
  bool f = false;
  // Which of the follwing string(s) will be printed?
  if (t == 1)
    printf("t == 1\n");
  else
    printf("t != 1\n");

  if (f == 0)
    printf("f == 0\n");
  else
    printf("f != 0\n");
}
