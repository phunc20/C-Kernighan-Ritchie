## `0177` is octal
```bash
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/09-bitwise_operators ❯❯❯ gcc ab_AND.c binary.c
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/09-bitwise_operators ❯❯❯ ./a.out
1000 & 0177 = 104
1000 & 177 = 160
3 & 0177 = 3
3 & 177 = 1

0177 = 127
0177 = (1111111)_2
177  = (10001101)_2
```

## True is non-zero; false is zero

```bash
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/09-bitwise_operators ❯❯❯ gcc ad_distinguish.c
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/09-bitwise_operators ❯❯❯ vim ad_distinguish.c
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/09-bitwise_operators ❯❯❯ ./a.out
1 & 2 = 0
1 && 2 = 1
1 && -1 = 1
1 && 0 = 0
```


## `>>` can also be used like `+=`: `>>=`
cf. `binary.c`


## Octal and hexadecimal only? Inconvenient?
One might find not having a binary way to express numbers in C inconvenient. But this design might serve the
deed for being more compact.<br>
For example,
- `(77)_8` equals `(111111)_2` because `(077)_8 = (100)_8 - 1 = 8**2 - 1 = 2**6 - 1`.
- `(5)_8 = (101)_2` and `(55)_8 = (101101)_2` as shown in the following ipython code.
  ```python
  In [12]: print(f"{0o55:b}")
  101101
  ```
- You might have already noticed: each octal digit corresponds to 3 bits.
  - Indeed, say, `a_k in [0..7]` being the octal digit of `8**k`, expressing `a_k` first in binary gives, e.g. if `a_k = 6`, `(6)_8 = (110)_2`. Then, the real number that `a_k * (8**k)` contributes to can be more easily seen as `(110)_2 * (2**3k) = 1*(2**(3k+2)) + 1*(2**(3k+1)) + 0*(2**(3k+0))`. From there, we see the correspondance of each octal digit to `3` bits.

The same holds for hexadecimal numbers: every hexadecimal digit corresponds to `4` bits.


# Shift negatively
```bash
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/09-bitwise_operators ❯❯❯ gcc ae_shift.c
ae_shift.c: In function ‘main’:
ae_shift.c:8:34: warning: right shift count is negative [-Wshift-count-negative]
    8 |   printf("%d >> -1 = %d\n", x, x >> -1);
      |                                  ^~
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/09-bitwise_operators ❯❯❯ ./a.out
5 >> 0 = 5
5 >> 1 = 2
5 >> 2 = 1
5 >> -1 = 0
```

## One's complement
What will **`~0`** be, if it is **all 1-bits**?

Printing `~0` using `binary.c` will print **indefinitely**.
```bash
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/09-bitwise_operators ❯❯❯ cat af_0comp.c
#include <stdio.h>
#include "binary.h"

int main(int argc, char **argv) {
  int x = ~0;
  printf("~0 = %d\n", ~0);

  // print in binary form: This will print indefinitely.
  printf("(~0)_2");
  printb(x);
  printf("\n");
  return 0;
}
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/09-bitwise_operators ❯❯❯ gcc af_0comp.c binary.c
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/09-bitwise_operators ❯❯❯ ./a.out
~0 = -1
1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111^C
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/09-bitwise_operators ❯❯❯
```


## Test `getbits()`
```bash
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/09-bitwise_operators ❯❯❯ gcc ag_test_getbits.c bits.c
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/09-bitwise_operators ❯❯❯ ./a.out
getbits(863, 7, 7) = 47
Expected ans: 47
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/09-bitwise_operators ❯❯❯ cat ag_test_getbits.c
#include <stdio.h>
#include "bits.h"

int main(int argc, char **argv) {
  /* Say, 0b1101011111 (python expression) is the number we want to test
   * with p = 7, n = 7. The result should be 0101111, i.e. 47,
   * the original number being 0o1537 (python expression), i.e. 01537(c expression)
   */
  int x = 01537;
  int p = 7;
  int n = 7;
  //int n = 9;  // To my surprise, this compiles w/o problem.
  int ans = 47;
  printf("getbits(%d, %d, %d) = %d\n", x,p,n,getbits(x,p,n));
  printf("Expected ans: %d\n", ans);
  return 0;
}
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/09-bitwise_operators ❯❯❯
```


## Todo
01. Try unsigned int left shift (`<<`) overflow
02. Try right shifting (`>>`) a signed integer



