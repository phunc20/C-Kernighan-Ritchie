#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
#include <math.h>

double f(double x) {
  return 2*x*x;
}

double derivative(double x, double g(double)) {
  double epsilon = 0.000001;
  return (g(x+epsilon) - g(x)) / epsilon ;
}

int main(int argc, char **argv) {
  printf("derivative(1, f) = %f\n", derivative(1, f));
  printf("derivative(2, f) = %f\n", derivative(2, f));
  printf("derivative(4, f) = %f\n", derivative(4, f));
  printf("\n");
  printf("derivative(1, exp) = %f\n", derivative(1, exp));
  printf("derivative(0, exp) = %f\n", derivative(0, exp));
  printf("derivative(-1, exp) = %f\n", derivative(-1, exp));
  return 0;
}
