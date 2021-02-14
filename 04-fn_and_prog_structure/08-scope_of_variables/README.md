
```bash
[phunc20@homography-x220t 08-scope_of_variables]$ gcc 01_initializations.c
[phunc20@homography-x220t 08-scope_of_variables]$ ./a.out
n = 845038195
Inside "if", i = 0
Outside "if...else", i = -128
[phunc20@homography-x220t 08-scope_of_variables]$ gcc 01_initializations.c
[phunc20@homography-x220t 08-scope_of_variables]$ ./a.out
n = -76859102
Inside "else", i = 127
Outside "if...else", i = -128
[phunc20@homography-x220t 08-scope_of_variables]$ cat 01_initializations.c
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  srand(time(NULL));
  int n = rand() - RAND_MAX / 2;
  printf("n = %d\n", n);
  if (n > 0) {
    int i;
    i = 0;
    printf("Inside \"if\", i = %d\n", i);
  }
  else {
    int i;
    i = 127;
    printf("Inside \"else\", i = %d\n", i);
  }
  int i;
  i = -128;
  printf("Outside \"if...else\", i = %d\n", i);
  return 0;
}
[phunc20@homography-x220t 08-scope_of_variables]$
```





```bash
[phunc20@homography-x220t 08-scope_of_variables]$ vim 02_conceal_outer_scope.c
[phunc20@homography-x220t 08-scope_of_variables]$ gcc 02_conceal_outer_scope.c
[phunc20@homography-x220t 08-scope_of_variables]$ ./a.out
Inside f(), x = 3.14, y = -13.13
Outside f(), x = 10, y = -13
[phunc20@homography-x220t 08-scope_of_variables]$ cat 02_conceal_outer_scope.c
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
```
