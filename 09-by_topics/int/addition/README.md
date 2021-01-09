##  About addtion btw `int`'s
Here, I made some notes on the addition of `int`'s that I come to understand
from reading articles on the Internet. I have chosen LaTeX to edit the thought
since I would like to use `tikZ` to draw sth. So, please read on at `like_a_group.pdf`.


## Support by assembly
I wanted to support the idea of cycle, i.e. `(10...0)_2 = 0` by means of assembly code.
But for the time being I am not capable of explaining assemly code. I'll leave it as is.
```bash
~/.../09-by_topics/int/addition ❯❯❯ cat cycle_back.c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv) {
        int a = ~0;
        int b = 2;
        int sum = a + b;
  return 0;
}
~/.../09-by_topics/int/addition ❯❯❯ gcc -S cycle_back.c
~/.../09-by_topics/int/addition ❯❯❯ cat cycle_back.s
        .file   "cycle_back.c"
        .text
        .globl  main
        .type   main, @function
main:
.LFB6:
        .cfi_startproc
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register 6
        movl    %edi, -20(%rbp)
        movq    %rsi, -32(%rbp)
        movl    $-1, -12(%rbp)
        movl    $2, -8(%rbp)
        movl    -12(%rbp), %edx
        movl    -8(%rbp), %eax
        addl    %edx, %eax
        movl    %eax, -4(%rbp)
        movl    $0, %eax
        popq    %rbp
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
.LFE6:
        .size   main, .-main
        .ident  "GCC: (Gentoo 9.3.0 p2) 9.3.0"
        .section        .note.GNU-stack,"",@progbits
~/.../09-by_topics/int/addition ❯❯❯
```


## Negative `int` when right shifted
the left most digits will be filled with `1`'s. It is as if negative `int` are like `-2**31 = (10...0)_2 = (1...10...0)_2`.
Indeed,
```bash
~/.../09-by_topics/int/addition ❯❯❯ gcc rightshift_neg.c
~/.../09-by_topics/int/addition ❯❯❯ ./a.out
int a = INT_MIN = 80000000
int b = 6 = 6
int c = ~0 = ffffffff
a >> 1 = c0000000
b >> 1 = 3
c >> 1 = ffffffff
~/.../09-by_topics/int/addition ❯❯❯ cat rightshift_neg.c
#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv) {
  int a = INT_MIN;
  int b = 6;
  int c = ~0;
  printf(
  "int a = INT_MIN = %x"
  "\n"
  "int b = 6 = %x"
  "\n"
  "int c = ~0 = %x"
  "\n", a, b, c
  );
  printf("a >> 1 = %x\n", a >> 1);
  printf("b >> 1 = %x\n", b >> 1);
  printf("c >> 1 = %x\n", c >> 1);
  return 0;
}
```



