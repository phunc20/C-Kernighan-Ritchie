
**(?1)** As described in the book, `printd()` indeed fails to print correctly when the input is the most negative `int`. But Why?<br>
```bash
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/10-recursion ❯❯❯ gcc 02_largest_negative_int.c -lm
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/10-recursion ❯❯❯ ./a.out 
sizeof(int) = 4
n_bytes := sizeof(int) = 4(%zu) = 4(%d)
k := -pow(2, n_bytes*8 - 1) = -2147483648
k + 1 = -2147483647
k - 1 = 2147483647
printd(k) = printd(-2147483648) = --214748364(
printd(k+1) = printd(-2147483647) = -2147483647
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/10-recursion ❯❯❯ 
```

**(R1)** As I later modified the file `02_largest_negative_int.c`, it now contains an answer to this question.
```bash
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/10-recursion ❯❯❯ gcc 02_largest_negative_int.c -lm
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/10-recursion ❯❯❯ ./a.out 
sizeof(int) = 4
n_bytes := sizeof(int) = 4(%zu) = 4(%d)
k := -pow(2, n_bytes*8 - 1) = -2147483648
k + 1 = -2147483647
k - 1 = 2147483647
-k = -2147483648
k % 10 = -2147483648 % 10 = -8
(k % 10) + '0' = (-2147483648 % 10) + '0' = -8 + '0' = (
printd(k) = printd(-2147483648) = --214748364(
printd(k+1) = printd(-2147483647) = -2147483647
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/10-recursion ❯❯❯ 
```


**(?2)** The above way of finding powers, isn't it buggy? There are discussions on [this](https://stackoverflow.com/questions/101439/the-most-efficient-way-to-implement-an-integer-based-power-function-powint-int).


### qsort
The given `qsort()` in the book.
```bash
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/10-recursion ❯❯❯ gcc 03_qsort.c 
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/10-recursion ❯❯❯ ./a.out 
(Before qqsort(v)) v = {6,1,7,3,9,9,4,3,0,6,}
(After qqsort(v)) v = {0,1,3,3,4,6,6,7,9,9,}
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/10-recursion ❯❯❯ ./a.out 
(Before qqsort(v)) v = {7,5,4,0,3,5,8,7,2,6,}
(After qqsort(v)) v = {0,2,3,4,5,5,6,7,7,8,}
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/10-recursion ❯❯❯ ./a.out 
(Before qqsort(v)) v = {9,0,0,8,1,8,0,3,0,8,}
(After qqsort(v)) v = {0,0,0,0,1,3,8,8,8,9,}
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/10-recursion ❯❯❯ 
```
The built-in `qsort()` in `stdlib.h`.
```bash
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/10-recursion ❯❯❯ gcc 04_qsort.c 
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/10-recursion ❯❯❯ ./a.out 
(Before qsort(v)) v = {2,0,0,6,9,9,8,9,6,2,}
(After qsort(v)) v = {0,0,2,2,6,6,8,9,9,9,}
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/10-recursion ❯❯❯ ./a.out 
(Before qsort(v)) v = {7,2,6,3,5,9,8,7,4,1,}
(After qsort(v)) v = {1,2,3,4,5,6,7,7,8,9,}
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/10-recursion ❯❯❯ 
```
**(?3)** Why the compare function in `qsort()` has to be defined so complicatedly?
