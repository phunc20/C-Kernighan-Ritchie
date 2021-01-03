#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
  int a;
  a = 11;
  int right_shifted = a >> 1;
  printf("a = %d = (%o)_8\n", a, a);
  printf("a >> 1 = %d = (%o)_8\n", right_shifted, right_shifted);
  printf("\n");

  a = -7;
  right_shifted = a >> 1;
  printf("a = %d = (%o)_8\n", a, a);
  printf("a >> 1 = %d = (%o)_8\n", right_shifted, right_shifted);
  printf("\n");

  a = 0;
  right_shifted = a >> 1;
  printf("a = %d = (%o)_8\n", a, a);
  printf("a >> 1 = %d = (%o)_8\n", right_shifted, right_shifted);
  printf("\n");

  printf("sizeof(int) = %d\n", sizeof(int));
  // 4 bytes, as on my thinkpad x220
  int plafond;
  //plafond = (int) pow(2, 64);
  //plafond += 1;
  int exp[] = {30, 31, 32};
  for (int i=0; i<3; ++i) {
    plafond = (int) pow(2, exp[i]);
    printf("(int) pow(2, %d)     = %d\n", exp[i], plafond);
    printf("(int) pow(2, %d) - 1 = %d\n", exp[i], plafond-1);
  }
  printf("\n");

  a = 1 << 31 - 1;
  right_shifted = a >> 1;
  printf("a      = 1 << 31 - 1;\n");
  printf("a      = %d = (%o)_8\n", a, a);
  printf("a >> 1 = %d = (%o)_8\n", right_shifted, right_shifted);
  printf("\n");

  a = 1 << 30;
  right_shifted = a >> 1;
  printf("a      = 1 << 30;\n");
  printf("a      = %d = (%o)_8\n", a, a);
  printf("a >> 1 = %d = (%o)_8\n", right_shifted, right_shifted);
  printf("\n");

  a = (int) pow(2, 31) - 1;
  right_shifted = a >> 1;
  printf("a      = (int) pow(2, 31) - 1;\n");
  printf("a      = %d = (%o)_8\n", a, a);
  printf("a >> 1 = %d = (%o)_8\n", right_shifted, right_shifted);
  printf("\n");

  a = 1 << 32 - 1;
  right_shifted = a >> 1;
  printf("a      = 1 << 32 - 1;\n");
  printf("a      = %d = (%o)_8\n", a, a);
  printf("a >> 1 = %d = (%o)_8\n", right_shifted, right_shifted);
  printf("\n");

  a = (1 << 31) - 1;
  right_shifted = a >> 1;
  printf("a      = (1 << 31) - 1;\n");
  printf("a      = %d = (%o)_8\n", a, a);
  printf("a >> 1 = %d = (%o)_8\n", right_shifted, right_shifted);
  printf("\n");

  a = (1 << 31);
  right_shifted = a >> 1;
  printf("a      = (1 << 31);\n");
  printf("a      = %d = (%o)_8\n", a, a);
  printf("a >> 1 = %d = (%o)_8\n", right_shifted, right_shifted);
  printf("\n");

  return 0;
}
