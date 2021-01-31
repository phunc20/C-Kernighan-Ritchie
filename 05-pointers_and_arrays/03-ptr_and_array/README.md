## `01_ptr_arith.c`
```bash
phunc20@cingular-x61s:~/git-repos/phunc20/C-Kernighan-Ritchie/05-pointers_and_arrays/03-ptr_and_array$ gcc 01_ptr_arith.c
phunc20@cingular-x61s:~/git-repos/phunc20/C-Kernighan-Ritchie/05-pointers_and_arrays/03-ptr_and_array$ ./a.out
ptr+0    = 0x7ffe12acd4b0
*(ptr+0) = D

ptr+1    = 0x7ffe12acd4b1
*(ptr+1) = a

ptr+2    = 0x7ffe12acd4b2
*(ptr+2) = n

ptr+3    = 0x7ffe12acd4b3
*(ptr+3) = k

ptr+4    = 0x7ffe12acd4b4
*(ptr+4) = e

ptr+5    = 0x7ffe12acd4b5
*(ptr+5) = ,

ptr+6    = 0x7ffe12acd4b6
*(ptr+6) =

ptr+7    = 0x7ffe12acd4b7
*(ptr+7) = W

ptr+8    = 0x7ffe12acd4b8
*(ptr+8) = e

ptr+9    = 0x7ffe12acd4b9
*(ptr+9) = l

ptr+10    = 0x7ffe12acd4ba
*(ptr+10) = t

ptr+11    = 0x7ffe12acd4bb
*(ptr+11) = .

phunc20@cingular-x61s:~/git-repos/phunc20/C-Kernighan-Ritchie/05-pointers_and_arrays/03-ptr_and_array$
```


## `02_array.c`
```bash
phunc20@cingular-x61s:~/git-repos/phunc20/C-Kernighan-Ritchie/05-pointers_and_arrays/03-ptr_and_array$ vim README.md
phunc20@cingular-x61s:~/git-repos/phunc20/C-Kernighan-Ritchie/05-pointers_and_arrays/03-ptr_and_array$ gcc 02_array.c
phunc20@cingular-x61s:~/git-repos/phunc20/C-Kernighan-Ritchie/05-pointers_and_arrays/03-ptr_and_array$ ./a.out
char a[30] = "Danke, Welt.";
char *pa1 = &a[0];
char *pa2 = a;

a     = 0x7fff9f60d1f0(%p)
&a[0] = 0x7fff9f60d1f0(%p)
pa1   = 0x7fff9f60d1f0(%p)
pa2   = 0x7fff9f60d1f0(%p)

a     = -1621044752(%d)
&a[0] = -1621044752(%d)
pa1   = -1621044752(%d)
pa2   = -1621044752(%d)
phunc20@cingular-x61s:~/git-repos/phunc20/C-Kernighan-Ritchie/05-pointers_and_arrays/03-ptr_and_array$
```


## `03_ref.c`
```bash
phunc20@cingular-x61s:~/git-repos/phunc20/C-Kernighan-Ritchie/05-pointers_and_arrays/03-ptr_and_array$ gcc 03_ref.c
phunc20@cingular-x61s:~/git-repos/phunc20/C-Kernighan-Ritchie/05-pointers_and_arrays/03-ptr_and_array$ ./a.out
char a[30] = "Danke, Welt.";
char *pa = &a[0];

a[00]     = D(%c)
*(a+00)   = D(%c)
pa[00]    = D(%c)
*(pa+00)  = D(%c)
(a+00)    = 0x7fff064808c0(%p)
&a[00]    = 0x7fff064808c0(%p)

a[01]     = a(%c)
*(a+01)   = a(%c)
pa[01]    = a(%c)
*(pa+01)  = a(%c)
(a+01)    = 0x7fff064808c1(%p)
&a[01]    = 0x7fff064808c1(%p)

a[02]     = n(%c)
*(a+02)   = n(%c)
pa[02]    = n(%c)
*(pa+02)  = n(%c)
(a+02)    = 0x7fff064808c2(%p)
&a[02]    = 0x7fff064808c2(%p)

a[03]     = k(%c)
*(a+03)   = k(%c)
pa[03]    = k(%c)
*(pa+03)  = k(%c)
(a+03)    = 0x7fff064808c3(%p)
&a[03]    = 0x7fff064808c3(%p)

a[04]     = e(%c)
*(a+04)   = e(%c)
pa[04]    = e(%c)
*(pa+04)  = e(%c)
(a+04)    = 0x7fff064808c4(%p)
&a[04]    = 0x7fff064808c4(%p)

a[05]     = ,(%c)
*(a+05)   = ,(%c)
pa[05]    = ,(%c)
*(pa+05)  = ,(%c)
(a+05)    = 0x7fff064808c5(%p)
&a[05]    = 0x7fff064808c5(%p)

a[06]     =  (%c)
*(a+06)   =  (%c)
pa[06]    =  (%c)
*(pa+06)  =  (%c)
(a+06)    = 0x7fff064808c6(%p)
&a[06]    = 0x7fff064808c6(%p)

a[07]     = W(%c)
*(a+07)   = W(%c)
pa[07]    = W(%c)
*(pa+07)  = W(%c)
(a+07)    = 0x7fff064808c7(%p)
&a[07]    = 0x7fff064808c7(%p)

a[08]     = e(%c)
*(a+08)   = e(%c)
pa[08]    = e(%c)
*(pa+08)  = e(%c)
(a+08)    = 0x7fff064808c8(%p)
&a[08]    = 0x7fff064808c8(%p)

a[09]     = l(%c)
*(a+09)   = l(%c)
pa[09]    = l(%c)
*(pa+09)  = l(%c)
(a+09)    = 0x7fff064808c9(%p)
&a[09]    = 0x7fff064808c9(%p)

a[10]     = t(%c)
*(a+10)   = t(%c)
pa[10]    = t(%c)
*(pa+10)  = t(%c)
(a+10)    = 0x7fff064808ca(%p)
&a[10]    = 0x7fff064808ca(%p)

a[11]     = .(%c)
*(a+11)   = .(%c)
pa[11]    = .(%c)
*(pa+11)  = .(%c)
(a+11)    = 0x7fff064808cb(%p)
&a[11]    = 0x7fff064808cb(%p)

phunc20@cingular-x61s:~/git-repos/phunc20/C-Kernighan-Ritchie/05-pointers_and_arrays/03-ptr_and_array$
```


## `04_array_is_not_var.c, 05_array_is_not_var.c`
```bash
phunc20@cingular-x61s:~/git-repos/phunc20/C-Kernighan-Ritchie/05-pointers_and_arrays/03-ptr_and_array$ gcc 04_array_is_not_var.c
04_array_is_not_var.c: In function ‘main’:
04_array_is_not_var.c:6:9: error: assignment to expression with array type
   array = ptr;
            ^
phunc20@cingular-x61s:~/git-repos/phunc20/C-Kernighan-Ritchie/05-pointers_and_arrays/03-ptr_and_array$ gcc 05_array_is_not_var.c
05_array_is_not_var.c: In function ‘main’:
05_array_is_not_var.c:6:8: error: lvalue required as increment operand
   array++;
        ^~
phunc20@cingular-x61s:~/git-repos/phunc20/C-Kernighan-Ritchie/05-pointers_and_arrays/03-ptr_and_array$
```


## `06_strlen_correct.c`
```bash
phunc20@cingular-x61s:~/git-repos/phunc20/C-Kernighan-Ritchie/05-pointers_and_arrays/03-ptr_and_array$ ./a.out
array = "Danke, Welt."(%s)
ptr1 = "Danke, Welt."(%s)
ptr2 = "Welt."(%s)

strlength("hello, world") = 12
strlength(array) = 12
strlength(ptr1) = 12
strlength(ptr2) = 5
phunc20@cingular-x61s:~/git-repos/phunc20/C-Kernighan-Ritchie/05-pointers_and_arrays/03-ptr_and_array$ 
```
