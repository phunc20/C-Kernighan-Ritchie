#include <stdio.h>

int main(int argc, char **argv) {
  printf("In C language:\n");
  int i = -100;
  if (i)
    printf("%d represents true.\n", i);
  else
    printf("%d represents false.\n", i);

  i = 17;
  if (i)
    printf("%d represents true.\n", i);
  else
    printf("%d represents false.\n", i);

  i = 0;
  if (i)
    printf("%d represents true.\n", i);
  else
    printf("%d represents false.\n", i);
  
  float f = 3.14159;
  if (f)
    printf("%f represents true.\n", f);
  else
    printf("%f represents false.\n", f);

  f = -2.71828;
  if (f)
    printf("%f represents true.\n", f);
  else
    printf("%f represents false.\n", f);

  f = 0;
  if (f)
    printf("%f represents true.\n", f);
  else
    printf("%f represents false.\n", f);
}
