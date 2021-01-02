#include <stdio.h>
#include "setbits.h"
#include "../binary.h"

int main(int argc, char **argv) {
  // x = (110000111)_2
  printf("SET x = (607)_8 = (110000111)_2\n");
  int x = 0607;
  printf("GET x = (%o)_8 = ", x);
  printbb(x);
  printf("\n");
  // y = (101000001111)_2
  printf("SET y = (5017)_8 = (101000001111)_2\n");
  int y = 05017;
  printf("GET y = (%o)_8 = ", y);
  printbb(y);
  printf("\n");

  int p = 6;
  int n = 4;
  int ans = setbits(x,p,n,y);
  printf("setbits(%d,%d,%d,%d) = (%o)_8 = ", x,p,n,y, ans);
  printbb(ans);
  printf("\n");
  printf("Expected result: (111111111)_2, i.e. (777)_8\n");
  printf("\n");
  return 0;
}
