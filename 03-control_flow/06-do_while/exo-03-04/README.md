## Why only the "largest" negative number encounters a bug?
As 
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
