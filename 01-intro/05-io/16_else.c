#include <stdio.h>

int main() {
  /*
  if (10 == 0)
    printf("10 == 0");
  else if (10 < 0)
    printf("10 < 0");
  else
    printf("10 > 0");
   */

  /* Equiv. to the following
  if (10 == 0)
    printf("10 == 0");
  else if (10 < 0)
         printf("10 < 0");
       else
         printf("10 > 0");
   */

  //* Encore equiv. au suivant
  if (10 == 0)
    printf("10 == 0");
  else {
    if (10 < 0)
      printf("10 < 0");
    else
      printf("10 > 0");
  }

  printf("\n");
}
