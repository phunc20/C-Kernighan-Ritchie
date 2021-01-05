## It turned out that I cannot find a satisfatory answer alone
so I went on the Internet to find what others have to say about it. Here below is two sources that I found helpful
- [https://clc-wiki.net/wiki/K&R2_solutions:Chapter_3:Exercise_1](https://clc-wiki.net/wiki/K&R2_solutions:Chapter_3:Exercise_1)
- [https://codereview.stackexchange.com/questions/6152/binary-search-optimization-kernighan-ritchie-3-1](https://codereview.stackexchange.com/questions/6152/binary-search-optimization-kernighan-ritchie-3-1)

## Comment on the solution on StackExchange
```c
while (low < high) {
  mid = (low + high + 1) / 2;
  if (x < v[mid]) high = mid - 1;
  else low = mid;
}
```
- Note that in this implementation not only `high` is decreasing,  but `low` is increasing as well, effectively shrinking the interval `[low .. high]` thru each iteration
  - The reason why `low` is strictly increasing is thru the assignment `low = mid` and `mid = (low + high + 1) / 2`: Since inside the while loop, `low < high`, that is, `high >= low + 1`, we know that `mid = (low + high + 1) / 2 >= (2*low + 2) / 2 == low + 1`
- What's the order btw `low` and `high` upon exiting the while loop? Ans: **`low == high`**. This can be seen in two cases:
  01. `high = mid - 1` from the last iteration: Since `mid >= low + 1` as discussed above, we see that `high >= low`. The only possibility to invalidate `low  < high` is thus `low == high`.
  02. `low  = mid` from the last iteration: Since `mid = (low + high + 1) / 2` and `low < high` (or equiv. `high >= low + 1`) inside the loop, we can see that `mid <= (high + high) / 2 == high`.

So we are guaranteed to exit the loop. Besides, when exiting the loop we have `low == high` and `x == v[low]` if ever `x` is figured in `v`. That's why the function is finished with `return (x == v[low]) ? v[low] : -1;`


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


