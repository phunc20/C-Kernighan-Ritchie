
```bash
[phunc20@homography-x220t ch01]$ gcc hello_world.c
hello_world.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main()
      | ^~~~
[phunc20@homography-x220t ch01]$ ll
total 24
-rw-r--r-- 1 phunc20 phunc20    58 Nov 26 19:10 hello_world.c
-rwxr-xr-x 1 phunc20 phunc20 16608 Nov 26 19:10 a.out
[phunc20@homography-x220t ch01]$ ./a.out
[phunc20@homography-x220t ch01]$ mv hello_world.c hello.c
[phunc20@homography-x220t ch01]$ rm a.out
[phunc20@homography-x220t ch01]$ cc hello.c
hello.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main()
      | ^~~~
[phunc20@homography-x220t ch01]$ ll
total 24
-rw-r--r-- 1 phunc20 phunc20    58 Nov 26 19:10 hello.c
-rwxr-xr-x 1 phunc20 phunc20 16600 Nov 26 19:11 a.out
[phunc20@homography-x220t ch01]$ ./a.out
hello, world
[phunc20@homography-x220t ch01]$ vim hello.c
[phunc20@homography-x220t ch01]$ cc hello.c
hello.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main()
      | ^~~~
[phunc20@homography-x220t ch01]$ ./a.out
hello, phunc20
[phunc20@homography-x220t ch01]$ ls
a.out  hello.c
[phunc20@homography-x220t ch01]$ a.out
-bash: a.out: command not found
[phunc20@homography-x220t ch01]$ gcc hello.c
hello.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main()
      | ^~~~
hello.c: In function ‘main’:
hello.c:23:32: warning: unknown escape sequence: '\s'
   23 |  printf("hello, \sphunc20\w!\y");
      |                                ^
hello.c:23:32: warning: unknown escape sequence: '\w'
hello.c:23:32: warning: unknown escape sequence: '\y'
[phunc20@homography-x220t ch01]$ ./a.out
hello, sphunc20w!y[phunc20@homography-x220t ch01]$

```
