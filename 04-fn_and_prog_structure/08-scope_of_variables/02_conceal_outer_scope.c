#include <stdio.h>

int main(int argc, char **argv) {
  int x = 10;
  int y = -13;

  void f(double x) {
    double y = -13.131313;
    printf("Inside f(), x = %.2f, y = %.2f\n", x, y);
  }
  f(3.14159);
  printf("Outside f(), x = %d, y = %d\n", x, y);

  return 0;
}
