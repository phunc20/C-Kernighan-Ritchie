## length of an array
```bash
~/.../C-Kernighan-Ritchie/05-pointers_and_arrays/01-pointer_and_address ❯❯❯ gcc 04_length.c
~/.../C-Kernighan-Ritchie/05-pointers_and_arrays/01-pointer_and_address ❯❯❯ ./04
-bash: ./04: No such file or directory
~/.../C-Kernighan-Ritchie/05-pointers_and_arrays/01-pointer_and_address ❯❯❯ ./a.out
int a1[] = {1,2,3};
int a2[3] = {1,2,3};
int a3[3];
int *pa1;
int *pa2 = &a2[0];

sizeof(a1)/sizeof(int) = 3
sizeof(a2)/sizeof(int) = 3
sizeof(a3)/sizeof(int) = 3
sizeof(pa1)/sizeof(int) = 2
sizeof(pa2)/sizeof(int) = 2
sizeof(*pa1)/sizeof(int) = 1
sizeof(*pa2)/sizeof(int) = 1
~/.../C-Kernighan-Ritchie/05-pointers_and_arrays/01-pointer_and_address ❯❯❯
```





```bash
[phunc20@homography-x220t ch05]$ cat 01_xyz.c
#include <stdio.h>

main()
{
  int x = 1, y =2, z[10];
  int *ip;  // ip is a pointer to int
  printf("int x = 1, y =2, z[10];\n");
  printf("int *ip;\n");
  printf("&x = %p, &y = %p, z = %p, ip = %p\n", &x, &y, z, ip);
  printf("x = %d, y = %d, z[0] = %d, *ip = %d (z[1] = %d, ..., z[9] = %d)\n\n", x, y, z[0], *ip, z[1], z[9]);

  ip = &x;
  printf("ip = &x;\n");
  printf("&x = %p, &y = %p, z = %p, ip = %p\n", &x, &y, z, ip);
  printf("x = %d, y = %d, z[0] = %d, *ip = %d (z[1] = %d, ..., z[9] = %d)\n\n", x, y, z[0], *ip, z[1], z[9]);

  y = *ip;
  printf("y = *ip;\n");
  printf("&x = %p, &y = %p, z = %p, ip = %p\n", &x, &y, z, ip);
  printf("x = %d, y = %d, z[0] = %d, *ip = %d (z[1] = %d, ..., z[9] = %d)\n\n", x, y, z[0], *ip, z[1], z[9]);

  *ip = 0;
  printf("*ip = 0;\n");
  printf("&x = %p, &y = %p, z = %p, ip = %p\n", &x, &y, z, ip);
  printf("x = %d, y = %d, z[0] = %d, *ip = %d (z[1] = %d, ..., z[9] = %d)\n\n", x, y, z[0], *ip, z[1], z[9]);

  ip = &z[0];
  printf("ip = &z[0];\n");
  printf("&x = %p, &y = %p, z = %p, ip = %p\n", &x, &y, z, ip);
  printf("x = %d, y = %d, z[0] = %d, *ip = %d (z[1] = %d, ..., z[9] = %d)\n\n", x, y, z[0], *ip, z[1], z[9]);
}
[phunc20@homography-x220t 05-pointers_and_arrays]$ ./a.out
int x = 1, y =2, z[10];
int *ip;
&x = 0x7fffa1d119d0, &y = 0x7fffa1d119d4, z = 0x7fffa1d119e0, ip = 0x562de2e8242d
x = 1, y = 2, z[0] = 0, *ip = 29590344 (z[1] = 0, ..., z[9] = 32767)

ip = &x;
&x = 0x7fffa1d119d0, &y = 0x7fffa1d119d4, z = 0x7fffa1d119e0, ip = 0x7fffa1d119d0
x = 1, y = 2, z[0] = 0, *ip = 1 (z[1] = 0, ..., z[9] = 32767)

y = *ip;
&x = 0x7fffa1d119d0, &y = 0x7fffa1d119d4, z = 0x7fffa1d119e0, ip = 0x7fffa1d119d0
x = 1, y = 1, z[0] = 0, *ip = 1 (z[1] = 0, ..., z[9] = 32767)

*ip = 0;
&x = 0x7fffa1d119d0, &y = 0x7fffa1d119d4, z = 0x7fffa1d119e0, ip = 0x7fffa1d119d0
x = 0, y = 1, z[0] = 0, *ip = 0 (z[1] = 0, ..., z[9] = 32767)

ip = &z[0];
&x = 0x7fffa1d119d0, &y = 0x7fffa1d119d4, z = 0x7fffa1d119e0, ip = 0x7fffa1d119e0
x = 0, y = 1, z[0] = 0, *ip = 0 (z[1] = 0, ..., z[9] = 32767)
[phunc20@homography-x220t ch05]$
```

## `segmentation fault`
```bash
[phunc20@homography-x220t ch05]$ cat associate_right_to_left.c
#include <stdio.h>

main()
{
        int *ip;  // ip is a pointer to int
        printf("ip = %p, *ip = %d\n\n", ip, *ip);
}
[phunc20@homography-x220t ch05]$ ./associate_right_to_left
Segmentation fault
[phunc20@homography-x220t ch05]$
```

When we really point `ip` to sth, we can start to `printf`:
```bash
[phunc20@homography-x220t ch05]$ head -n 12 associate_right_to_left.c
#include <stdio.h>

main()
{
        int *ip;  // ip is a pointer to int
        // Cannot print now; otherwise, segmentation fault happens.
        //printf("ip = %p, *ip = %d\n\n", ip, *ip);

        int x = 123456789;
        ip = &x;
        printf("ip = %p, *ip = %d\n", ip, *ip);
}
[phunc20@homography-x220t ch05]$ ./associate_right_to_left
ip = 0x7ffc25a7f1cc, *ip = 123456789
[phunc20@homography-x220t ch05]$
```

The entire program.
```bash
[phunc20@homography-x220t ch05]$ cat associate_right_to_left.c
#include <stdio.h>

main()
{
        int *ip;  // ip is a pointer to int
        // Cannot print now; otherwise, segmentation fault happens.
        //printf("ip = %p, *ip = %d\n\n", ip, *ip);

        int x = 123456789;
        ip = &x;
        printf("ip = %p, *ip = %d\n\n", ip, *ip);

        printf("%d\n", ++*ip);
        printf("ip = %p, *ip = %d\n\n", ip, *ip);

        printf("%d\n", (*ip)++);
        printf("ip = %p, *ip = %d\n\n", ip, *ip);

        printf("%d\n", *ip++);
        printf("ip = %p, *ip = %d\n\n", ip, *ip);

        printf("%d\n", ++*ip);
        printf("ip = %p, *ip = %d\n\n", ip, *ip);
}
[phunc20@homography-x220t ch05]$ ./associate_right_to_left
ip = 0x7ffc2d25578c, *ip = 123456789

123456790
ip = 0x7ffc2d25578c, *ip = 123456790

123456790
ip = 0x7ffc2d25578c, *ip = 123456791

123456791
ip = 0x7ffc2d255790, *ip = 757421968

-64150185
ip = 0x7ffc2d255791, *ip = -64150185
```
**(?)** Can you explain the increment in `ip = 0x7ffc2d255790` from `ip = 0x7ffc2d25578c`.


## Todo
01. `Makefile`
02. Try to define a function inside another one.
03. Use `sed` to replace the unintended indentation to 2spaces
