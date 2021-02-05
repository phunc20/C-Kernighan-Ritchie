## "Function as first citizen"
This sentence is frequently mentionned in a Scala course offered by Mr. Odersky as a way to emphasize
the functional programming aspect of the language. Examples of this sentence are
- a function can be the argument of another function.
- a function can be defined inside another function.

At the time of writing the 2nd edition of the C book by Mr. Kernighan and Mr. Ritchie, it seems that
the two examples above are indeed forbidden (I am not so sure because I did not know about programming at
all at that time.) However, as of year 2020-2021, C seems to get adapted and includes those new
concepts, as the files `func_as_arg.c`, `func_in_func.c` show.

```bash
~/.../C-Kernighan-Ritchie/09-by_topics/changed_behaviour ❯❯❯ gcc --version
gcc (GCC) 10.2.0
Copyright (C) 2020 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

~/.../C-Kernighan-Ritchie/09-by_topics/changed_behaviour ❯❯❯ gcc func_in_func.c
~/.../C-Kernighan-Ritchie/09-by_topics/changed_behaviour ❯❯❯ ./a.out
one() = 1
~/.../C-Kernighan-Ritchie/09-by_topics/changed_behaviour ❯❯❯ cat func_in_func.c
#include <stdio.h>

int main(int argc, char **argv) {
  int one(void) {
    int two(void) {
      return 2;
    }
    return two() - 1;
  }
  printf("one() = %d\n", one());
  return 0;
}
~/.../C-Kernighan-Ritchie/09-by_topics/changed_behaviour ❯❯❯ gcc func_as_arg.c  -lm
~/.../C-Kernighan-Ritchie/09-by_topics/changed_behaviour ❯❯❯ ./a.out
derivative(1, f) = 4.000002
derivative(2, f) = 8.000002
derivative(4, f) = 16.000002

derivative(1, exp) = 2.718283
derivative(0, exp) = 1.000000
derivative(-1, exp) = 0.367880
~/.../C-Kernighan-Ritchie/09-by_topics/changed_behaviour ❯❯❯ python -c "print(1/2.71828)"
0.36787968862663156
~/.../C-Kernighan-Ritchie/09-by_topics/changed_behaviour ❯❯❯ cat func_as_arg.c
#include <stdio.h>
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
~/.../C-Kernighan-Ritchie/09-by_topics/changed_behaviour ❯❯❯
```


## `gcc` and other C compilers
There is one friend who said that the above behaviours are compiler-independent. More precisely,
he said that what was said above was only valid under `gcc`.

I haven't tried on a machine equipped with other compilers than `gcc`, but do note that
on some Linux machines/distros, e.g. 32-bit Parabola, `cc` is just a symlink to `gcc`.
```bash
[phunc20@tako-x60 changed_behaviour]$ cc func_as_arg.c -lm
[phunc20@tako-x60 changed_behaviour]$ ./a.out
derivative(1, f) = 4.000002
derivative(2, f) = 8.000002
derivative(4, f) = 16.000002

derivative(1, exp) = 2.718283
derivative(0, exp) = 1.000000
derivative(-1, exp) = 0.367880
[phunc20@tako-x60 changed_behaviour]$ which cc
/usr/bin/cc
[phunc20@tako-x60 changed_behaviour]$ ll $(which cc)
lrwxrwxrwx 1 root root 3 Oct  2 01:31 /usr/bin/cc -> gcc
[phunc20@tako-x60 changed_behaviour]$
```



