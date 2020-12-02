## `getchar()`
```bash
[phunc20@homography-x220t 05-io]$ cat 01_getchar.c
#include <stdio.h>

main() {
  char c = getchar();
  printf("c = %c\n", c);
}
[phunc20@homography-x220t 05-io]$ cc 01_getchar.c
01_getchar.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
[phunc20@homography-x220t 05-io]$ ./a.out
ciajise
c = c
[phunc20@homography-x220t 05-io]$ ./a.out
ABASTIQJ
c = A
[phunc20@homography-x220t 05-io]$ ./a.out
Z
c = Z
[phunc20@homography-x220t 05-io]$
```

## `putchar()`
```bash
[phunc20@homography-x220t 05-io]$ gcc 02_putchar.c
#include <stdio.h>

main() {
  char c = getchar();
  printf("c = '");
  putchar(c);
  printf("'\n");
}
[phunc20@homography-x220t 05-io]$ gcc 02_putchar.c
02_putchar.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
[phunc20@homography-x220t 05-io]$ ./a.out
ZYXVDJIJIFDF
c = 'Z'
[phunc20@homography-x220t 05-io]$ ./a.out
&
c = '&'
[phunc20@homography-x220t 05-io]$ ./a.out
90810823
c = '9'
```


## `EOF`
To input `EOF` from the keyboard, usually typing `Ctrl d Ctrl d` (i.e. `Ctrl d` twice) will work.

**Rmk.** `EOF` equals `-1` on my machine of thinkpad X220.
```bash
[phunc20@homography-x220t 05-io]$ cat exo1-7.c
#include <stdio.h>

int main() {
  printf("EOF = %d\n", EOF);
}
[phunc20@homography-x220t 05-io]$ gcc exo1-7.c
[phunc20@homography-x220t 05-io]$ ./a.out
EOF = -1
```

```bash
[phunc20@homography-x220t 05-io]$ cat 03_copycat.c
#include <stdio.h>

main() {
  int c;

  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}
[phunc20@homography-x220t 05-io]$ gcc 03_copycat.c
03_copycat.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
[phunc20@homography-x220t 05-io]$ ./a.out
a
a
b
b
c
c
d
d
e
e
xyz
xyz
cccaaabbb
cccaaabbb
\n\nabc
\n\nabc
^C
[phunc20@homography-x220t 05-io]$
```

## `copy_cat.c` (precedence)
Had `while ((c = getchar()) != EOF)` be written w/o parentheses, i.e. **`while (c = getchar() != EOF)`**,
then it would be interpreted as **`while (c = (getchar() != EOF))`** because
> `!=` has a **higher precedence** than `=`

That way, we would still testing against whether the input equals `EOF`, the diff being that **we are no longer printing `getchar()` to the output**, instead, (since `c`'s type is `int`), we would be `putchar`ing `0` or `1`, which will display nothing in stdout.

```bash
[phunc20@homography-x220t 05-io]$ cat 05_copycat.c
#include <stdio.h>

main() {
  int c;
  // Note that we used int as type.

  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}
[phunc20@homography-x220t 05-io]$ gcc 05_copycat.c
05_copycat.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
[phunc20@homography-x220t 05-io]$ ./a.out
asjdif
asjdif
ajiwjeri
ajiwjeri
1234
1234
^C
[phunc20@homography-x220t 05-io]$ cp 05_copycat.c 06_parentheses.c
[phunc20@homography-x220t 05-io]$ vim 06_parentheses.c
[phunc20@homography-x220t 05-io]$ diff 06_parentheses.c 05_copycat.c
7c7
<   while (c = getchar() != EOF) {
---
>   while ((c = getchar()) != EOF) {
[phunc20@homography-x220t 05-io]$ gcc 06_parentheses.c
06_parentheses.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
[phunc20@homography-x220t 05-io]$ ./a.out
asdf
qwer
jaisjdfi
^C
[phunc20@homography-x220t 05-io]$
```


## `putchar(0)` and `putchar(1)`
```bash
[phunc20@homography-x220t 05-io]$ gcc 07_0and1.c
07_0and1.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
[phunc20@homography-x220t 05-io]$ ./a.out
[phunc20@homography-x220t 05-io]$ vim 07_0and1.c
[phunc20@homography-x220t 05-io]$ gcc 07_0and1.c
07_0and1.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
[phunc20@homography-x220t 05-io]$ ./a.out
[phunc20@homography-x220t 05-io]$
```


## `a != b` results in `0` or `1`
```bash
[phunc20@homography-x220t 05-io]$ cat 08_precedence.c
#include <stdio.h>

int main() {
  printf("getchar() != EOF equals %d,\ngetchar() != 'A' equals %d\n", getchar() != EOF, getchar() != 'A');
}
[phunc20@homography-x220t 05-io]$ gcc 08_precedence.c
[phunc20@homography-x220t 05-io]$ ./a.out
A
getchar() != EOF equals 1,
getchar() != 'A' equals 0
[phunc20@homography-x220t 05-io]$ ./a.out
Z
getchar() != EOF equals 1,
getchar() != 'A' equals 1
[phunc20@homography-x220t 05-io]$ ./a.out
brjtiqj
getchar() != EOF equals 1,
getchar() != 'A' equals 1
```

## Count characters
```bash
[phunc20@homography-x220t 05-io]$ cat 09_count_char.c
#include <stdio.h>

main() {
  long nc; // nc stands for "Num Char"

  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("\nnc = %1d\n", nc);
}
[phunc20@homography-x220t 05-io]$ gcc 09_count_char.c
09_count_char.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
[phunc20@homography-x220t 05-io]$ ./a.out
asdf

nc = 5
[phunc20@homography-x220t 05-io]$ ./a.out
abc
nc = 3
[phunc20@homography-x220t 05-io]$ ./a.out
zyxw
nc = 4
[phunc20@homography-x220t 05-io]$
```

## Number range
`double > long > int`

## `for`
```bash
[phunc20@homography-x220t 05-io]$ cat 11_for_w_nothing.c
#include <stdio.h>

main() {
  double nc; // nc stands for "Num Char"

  for (nc = 0; getchar() != EOF; ++nc);
  printf("\nnc = %.0f\n", nc);
}
[phunc20@homography-x220t 05-io]$ gcc 11_for_w_nothing.c
11_for_w_nothing.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
[phunc20@homography-x220t 05-io]$ ./a.out
asdf
nc = 4
[phunc20@homography-x220t 05-io]$ vim 11_for_w_nothing.c
[phunc20@homography-x220t 05-io]$ cat 11_for_w_nothing.c
#include <stdio.h>

main() {
  double nc; // nc stands for "Num Char"

  for (nc = 0; getchar() != EOF; ++nc)
  printf("\nnc = %.0f\n", nc);
}
[phunc20@homography-x220t 05-io]$ gcc 11_for_w_nothing.c
11_for_w_nothing.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
[phunc20@homography-x220t 05-io]$ ./a.out
asdf

nc = 0

nc = 1

nc = 2

nc = 3

nc = 4
asdfqwer

nc = 5

nc = 6

nc = 7

nc = 8

nc = 9

nc = 10

nc = 11

nc = 12

nc = 13

[phunc20@homography-x220t 05-io]$
```


## `%f`
```bash
[phunc20@homography-x220t 05-io]$ cat 12_format_print.c
#include <stdio.h>

main() {
  double nc; // nc stands for "Num Char"

  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("\nnc = %.1f\n", nc);
  printf("\nnc = %f\n", nc);
}
[phunc20@homography-x220t 05-io]$ gcc 12_format_print.c
12_format_print.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
[phunc20@homography-x220t 05-io]$ ./a.out
asdf

nc = 5.0

nc = 5.000000
[phunc20@homography-x220t 05-io]$ cat 10_double.c
#include <stdio.h>

main() {
  double nc; // nc stands for "Num Char"

  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("\nnc = %.0f\n", nc);
}
[phunc20@homography-x220t 05-io]$ gcc 10_double.c
10_double.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
[phunc20@homography-x220t 05-io]$ ./a.out
asdf
nc = 4
[phunc20@homography-x220t 05-io]$
```


## zero input
we input `ctrl d` right away when we are asked to input (`getchar()`) (cf. p.19 of the book)
```bash
[phunc20@homography-x220t 05-io]$ gcc 10_double.c
10_double.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
[phunc20@homography-x220t 05-io]$ ./a.out  

nc = 0
[phunc20@homography-x220t 05-io]$ ./a.out
[phunc20@homography-x220t 05-io]$ gcc 09_count_char.c
09_count_char.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
[phunc20@homography-x220t 05-io]$ ./a.out

nc = 0
```

## Line counting
```bash
[phunc20@homography-x220t 05-io]$ gcc 13_line_count.c
[phunc20@homography-x220t 05-io]$ ./a.out
qwer
qweri

nl = 2
[phunc20@homography-x220t 05-io]$ ./a.out
qwetqt
qoyjqpjypj
aasdf
nl = 2
[phunc20@homography-x220t 05-io]$ ./a.out
qijtqi4
qitjqij
qjiewtjo

nl = 3
```


## _character constant_
```bash
[phunc20@homography-x220t 05-io]$ gcc 14_char_constant.c
[phunc20@homography-x220t 05-io]$ ./a.out
'\n' = 10
'A' = 65
'B' = 66
'C' = 67
'X' = 88
'Y' = 89
'Z' = 90
'a' = 97
'b' = 98
'c' = 99
'x' = 120
'y' = 121
'z' = 122
[phunc20@homography-x220t 05-io]$ cat 14_char_constant.c
#include <stdio.h>

int main() {
  printf("'\\n' = %d\n", '\n');
  printf("'A' = %d\n", 'A');
  printf("'B' = %d\n", 'B');
  printf("'C' = %d\n", 'C');
  printf("'X' = %d\n", 'X');
  printf("'Y' = %d\n", 'Y');
  printf("'Z' = %d\n", 'Z');
  printf("'a' = %d\n", 'a');
  printf("'b' = %d\n", 'b');
  printf("'c' = %d\n", 'c');
  printf("'x' = %d\n", 'x');
  printf("'y' = %d\n", 'y');
  printf("'z' = %d\n", 'z');
}
```


## `bool`?
```bash
[phunc20@homography-x220t 05-io]$ gcc exo-1-9.c
exo-1-9.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
exo-1-9.c: In function ‘main’:
exo-1-9.c:6:3: error: unknown type name ‘bool’
    6 |   bool prev_is_blank = false;
      |   ^~~~
exo-1-9.c:6:24: error: ‘false’ undeclared (first use in this function); did you mean ‘fclose’?
    6 |   bool prev_is_blank = false;
      |                        ^~~~~
      |                        fclose
exo-1-9.c:6:24: note: each undeclared identifier is reported only once for each function it appears in
exo-1-9.c:15:25: error: ‘true’ undeclared (first use in this function)
   15 |         prev_is_blank = true;
      |                         ^~~~
[phunc20@homography-x220t 05-io]$ cat exo-1-9.c
#include <stdio.h>

main() {
  int c;

  bool prev_is_blank = false;
  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      putchar(c);
      prev_is_blank = false;
    }
    else {
      if (!prev_is_blank) {
        putchar(c);
        prev_is_blank = true;
      }
    }
  }
}
[phunc20@homography-x220t 05-io]$
```

## `wc`
```bash
[phunc20@homography-x220t 05-io]$ gcc 15_wc.c
[phunc20@homography-x220t 05-io]$ ./a.out
a person w/o taste is someone
tasteless       . Oops,
I've missed a period
. Again..
nl = 3
nw = 15
nc = 84
[phunc20@homography-x220t 05-io]$ cat 15_wc.c
#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0; // Note how this is convenient.
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t') {
      // Note that the or in C is the same as in bash
      state = OUT;
    }
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  putchar('\n');
  printf("nl = %d\n", nl);
  printf("nw = %d\n", nw);
  printf("nc = %d\n", nc);
}
[phunc20@homography-x220t 05-io]$
```


## QnA
01. `11_for_w_nothing.c` why its behaviour was like that when there was no semicolon (`;`)?
  - **R1** Recall that C language itself does not require you to indent. So **omitting** the semicolon simply equals
    ```c
    for (nc = 0; getchar() != EOF; ++nc)
      printf("\nnc = %.0f\n", nc);
    ```
02. meaning of
  - `ctrl d`
  - `ctrl d ctrl d`
  - `Enter`
03. How to type `backspace` from stdin?
  - `Ctrl Backspace` seems to be the answer
  - There is this `Alt Shift Backspace` that I don't know what it is, it's very similar but diff
04. Go find the source code of the Unix command `wc` and compare it with section 1.5.4


