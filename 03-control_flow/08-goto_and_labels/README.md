
```bash
leif@CenterLap-x1carbon ~/git-repos/phunc20/C-Kernighan-Ritchie/03-control_flow/08-goto_and_labels $ gcc aa_goto_common_element.c
leif@CenterLap-x1carbon ~/git-repos/phunc20/C-Kernighan-Ritchie/03-control_flow/08-goto_and_labels $ ./a.out
int a[] = {1,2,3,4,5};
int b[] = {-1,-2,-3,-4,-5};
int c[] = {1,-2,3,-4,5};

common(a, b, 5, 5);
No common element btw a[] and b[].

common(b, c, 5, 5);
a[1] = -2 equals b[1] = -2.
```
