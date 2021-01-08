## Why only the "largest" negative number encounters a bug?
Because `-MIN_INT == MIN_INT` and the line **`if (negative) n = -n;`**.
```bash
leif@CenterLap-x1carbon ~/git-repos/phunc20/C-Kernighan-Ritchie/03-control_flow/06-do_while/exo-03-04 $ ./a.out
n = 1<<31;
n = -2147483648
-n = -2147483648
(-n)/10 = 214748364
n/10 = -214748364
n % 10 + '0' = (
s = -(

n = (1<<31) + 1;
n = -2147483647
-n = 2147483647
(-n)/10 = 214748364
s = -2147483647
```

**(?)** Why `(-n) / 10 = 214748364` when `n = -2147483648`?




gcc -S sth.c
will produce a file named `sth.s`
which contains the equiv. assembly code.


## `n` and `-n` in `int`; two's complement
People say that `-n` is computed by taking the two's complement of `n` and then add `1`, i.e. `-n = two_complement(n) + 1`.

Note that `two_complement(n) + n = (11...1)_2` equals `-1`, adding one giving `0`.


## Right shift of negative `int`'s
When negative integers are right shifted in C, they are thought of as having infinite many `1`'s on their left side.
```bash
~/.../03-control_flow/06-do_while/exo-03-04 ❯❯❯ gcc ae_divideBy2.c
~/.../03-control_flow/06-do_while/exo-03-04 ❯❯❯ ./a.out
n = 1<<31;
n = -2147483648
n/2 = -1073741824
n>>1 = -1073741824
(110...0)_2 = -1073741824

n = (1<<31) + 1;
n = -2147483647
n/2 = -1073741823
n>>1 = -1073741824
```
