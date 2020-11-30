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
To input `EOF` from the keyboard, usually typing `Ctrl d` will work.

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
