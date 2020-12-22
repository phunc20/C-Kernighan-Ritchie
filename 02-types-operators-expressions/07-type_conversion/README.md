## `atoi()`
Note that the for loop inside this function stops when the condition **`s[i] >= '0' && s[i] <= '9'`** becomes false. This happens when a `char` inside `s` is not one of `'0', '1', '2', ..., '9'`. In other words, the loop stops when it encounters a character which is not a digit.
For example,
```bash
[phunc20@homography-x220t 07-type_conversion]$ gcc 04_atoi_pointer.c
[phunc20@homography-x220t 07-type_conversion]$ ./a.out
atoi("1900066890") = 1900066890
atoi("139A Vũ Tùng, P.2, Q. BT") = 139
atoi("593a32fe8dcc1472") = 593
```

### Runs
- successes
  ```bash
  [phunc20@homography-x220t 07-type_conversion]$ gcc 01_atoi.c
  [phunc20@homography-x220t 07-type_conversion]$ ./a.out
  atoi("1900066890") = 1900066890
  [phunc20@homography-x220t 07-type_conversion]$ gcc 04_atoi_pointer.c
  [phunc20@homography-x220t 07-type_conversion]$ ./a.out
  atoi("1900066890") = 1900066890
  atoi("139A Vũ Tùng, P.2, Q. BT") = 139
  atoi("593a32fe8dcc1472") = 593
  ```
- errors/warnings
  - `02_atoi_error.c`
    ```bash
    [phunc20@homography-x220t 07-type_conversion]$ gcc 02_atoi_error.c
    02_atoi_error.c: In function ‘main’:
    02_atoi_error.c:20:5: error: assignment to expression with array type
       20 |   s = "139A Vũ Tùng, P.2, Q. BT";
          |     ^
    ```
  - `03_atoi_error.c`
    ```bash
    [phunc20@homography-x220t 07-type_conversion]$ gcc 03_atoi_error.c
    03_atoi_error.c: In function ‘main’:
    03_atoi_error.c:20:6: error: lvalue required as left operand of assignment
       20 |   &s = "139A Vũ Tùng, P.2, Q. BT";
          |      ^
    ```
  - `05_atoi_strcpy.c`
    ```bash
    [phunc20@homography-x220t 07-type_conversion]$ gcc 05_atoi_error.c
    05_atoi_error.c: In function ‘main’:
    05_atoi_error.c:21:3: warning: ‘__builtin_memcpy’ writing 27 bytes into a region of size 11 overflows the destination [-Wstringop-overflow=]
       21 |   strcpy(s, "139A Vũ Tùng, P.2, Q. BT");
          |   ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    [phunc20@homography-x220t 07-type_conversion]$ ./a.out
    atoi("1900066890") = 1900066890
    atoi("139A Vũ Tùng, P.2, Q. BT") = 139
    *** stack smashing detected ***: terminated
    Aborted
    ```

## Python
Note that in Python we cannot substract a "char" (actually, in Python, it seems that there is no such thing as `char`, there being only `str`) from another.
```python
In [46]: 'b' - 'a'
---------------------------------------------------------------------------
TypeError                                 Traceback (most recent call last)
<ipython-input-46-9db38de06553> in <module>
----> 1 'b' - 'a'

TypeError: unsupported operand type(s) for -: 'str' and 'str'
```



## EBCDIC character set
- [http://ascii-table.com/ebcdic-table.php](http://ascii-table.com/ebcdic-table.php)
- [https://stackoverflow.com/questions/7734275/c-code-to-convert-ebcdic-printables-to-ascii-in-place](https://stackoverflow.com/questions/7734275/c-code-to-convert-ebcdic-printables-to-ascii-in-place)

## Using `tolower()` w/o `#include <ctype.h>`
On my Thinkpad T420, this seems to be ok.
```bash
[phunc20@homography-x220t 07-type_conversion]$ gcc 08_tolower_noInclude.c
08_tolower_noInclude.c: In function ‘main’:
08_tolower_noInclude.c:8:41: warning: implicit declaration of function ‘tolower’ [-Wimplicit-function-declaration]
    8 |     printf("tolower('%c') = '%c'\n", t, tolower(t));
      |                                         ^~~~~~~
08_tolower_noInclude.c:13:7: warning: multi-character character constant [-Wmultichar]
   13 |   t = 'Ế';
      |       ^~~
08_tolower_noInclude.c:13:7: warning: overflow in conversion from ‘int’ to ‘char’ changes value from ‘14793406’ to ‘-66’ [-Woverflow]
[phunc20@homography-x220t 07-type_conversion]$ ./a.out
tolower('A') = 'a'
tolower('B') = 'b'
tolower('C') = 'c'
tolower('D') = 'd'
tolower('E') = 'e'
tolower('F') = 'f'
tolower('G') = 'g'
tolower('H') = 'h'
tolower('I') = 'i'
tolower('J') = 'j'
tolower('K') = 'k'
tolower('L') = 'l'
tolower('M') = 'm'
tolower('N') = 'n'
tolower('O') = 'o'
tolower('P') = 'p'
tolower('Q') = 'q'
tolower('R') = 'r'
tolower('S') = 's'
tolower('T') = 't'
tolower('U') = 'u'
tolower('V') = 'v'
tolower('W') = 'w'
tolower('X') = 'x'
tolower('Y') = 'y'
tolower('Z') = 'z'
tolower('a') = 'a'
tolower('b') = 'b'
tolower('c') = 'c'
tolower('d') = 'd'
tolower('e') = 'e'
tolower('f') = 'f'
tolower('g') = 'g'
tolower('h') = 'h'
tolower('i') = 'i'
tolower('j') = 'j'
tolower('k') = 'k'
tolower('l') = 'l'
tolower('m') = 'm'
tolower('n') = 'n'
tolower('o') = 'o'
tolower('p') = 'p'
tolower('q') = 'q'
tolower('r') = 'r'
tolower('s') = 's'
tolower('t') = 't'
tolower('u') = 'u'
tolower('v') = 'v'
tolower('w') = 'w'
tolower('x') = 'x'
tolower('y') = 'y'
tolower('z') = 'z'
tolower('') = ''
```

## Nonzero represents true; zero represents false
```bash
[phunc20@homography-x220t 07-type_conversion]$ gcc 11_true_nonzero.c
[phunc20@homography-x220t 07-type_conversion]$ ./a.out
In C language:
-100 represents true.
17 represents true.
0 represents false.
3.141590 represents true.
-2.718280 represents true.
0.000000 represents false.
```
