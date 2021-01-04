## FoundNot

```bash
~/.../03-control_flow/03-else_if/exo-03-01 ❯❯❯ gcc aa_foundNot.c ../utils.c
~/.../03-control_flow/03-else_if/exo-03-01 ❯❯❯ ./a.out
^C
~/.../03-control_flow/03-else_if/exo-03-01 ❯❯❯ # The implementation of exo_binsearch is wrong.
~/.../03-control_flow/03-else_if/exo-03-01 ❯❯❯ # exo_binsearch2 is a new implementation.
~/.../03-control_flow/03-else_if/exo-03-01 ❯❯❯ cd ..
~/.../C-Kernighan-Ritchie/03-control_flow/03-else_if ❯❯❯ gcc exo-03-01/ab_foundNot.c utils.c
~/.../C-Kernighan-Ritchie/03-control_flow/03-else_if ❯❯❯ ./a.out
exo_binsearch2(x, v, n) = -1
~/.../C-Kernighan-Ritchie/03-control_flow/03-else_if ❯❯❯
```

## FoundCan

```bash
~/.../C-Kernighan-Ritchie/03-control_flow/03-else_if ❯❯❯ gcc ac_foundCan.c utils.c
~/.../C-Kernighan-Ritchie/03-control_flow/03-else_if ❯❯❯ ./a.out
v = [-10,-7,-3,-2,0,0,2,4,100,1000]
n = 10
x = 0
binsearch(x, v, n) = 4
~/.../C-Kernighan-Ritchie/03-control_flow/03-else_if ❯❯❯
```


## CPU Time
I haven't reached a conclusion as to which btw `binsearch()` and `exo_binsearch2()` runs faster, because
- At first, I tried with `len = 99999`, several runs all showed that `binsearch()` ran faster than `exo_binsearch2()`.
  ```bash
  ~/.../03-control_flow/03-else_if/exo-03-01 ❯❯❯ gcc ad_clock.c ../utils.c
  ~/.../03-control_flow/03-else_if/exo-03-01 ❯❯❯ ./a.out
  Sorting A ...
  Finish sorting.
  len = 99999
  x = A[50709]
  exo_binsearch2(x, A, len) = 50709
  CPU time consumed = 0.000008 (sec)
  
  binsearch(x, A, len) = 50709
  CPU time consumed = 0.000006 (sec)
  
  ~/.../03-control_flow/03-else_if/exo-03-01 ❯❯❯ vim ad_clock.c
  ~/.../03-control_flow/03-else_if/exo-03-01 ❯❯❯ gcc ad_clock.c ../utils.c
  ~/.../03-control_flow/03-else_if/exo-03-01 ❯❯❯ ./a.out
  Sorting A ...
  Finish sorting. Took 0.000000 (sec)
  len = 99999
  x = A[70966]
  exo_binsearch2(x, A, len) = 70966
  CPU time consumed = 0.000012 (sec)
  
  binsearch(x, A, len) = 70966
  CPU time consumed = 0.000007 (sec)
  
  ~/.../03-control_flow/03-else_if/exo-03-01 ❯❯❯ vim ad_clock.c
  ```
- Then I tried with greater `len` (here, `199999`), it seemed that `exo_binsearch2()` ran faster.
  ```bash
  ~/.../03-control_flow/03-else_if/exo-03-01 ❯❯❯ gcc ad_clock.c ../utils.c
  ~/.../03-control_flow/03-else_if/exo-03-01 ❯❯❯ ./a.out
  Sorting A ...
  Finish sorting. Took 54.861582 (sec)
  
  len = 199999
  x = A[120205]
  
  exo_binsearch2(x, A, len) = 120205
  cpu_time_used = 0.000004 (sec)
  
  binsearch(x, A, len) = 120205
  cpu_time_used = 0.000008 (sec)
  
  ~/.../03-control_flow/03-else_if/exo-03-01 ❯❯❯ ./a.out
  Sorting A ...
  Finish sorting. Took 53.957811 (sec)
  
  len = 199999
  x = A[169390]
  
  exo_binsearch2(x, A, len) = 169390
  cpu_time_used = 0.000004 (sec)
  
  binsearch(x, A, len) = 169390
  cpu_time_used = 0.000006 (sec)
  
  ~/.../03-control_flow/03-else_if/exo-03-01 ❯❯❯
  ```


