## Return value and the shell
`$?` captures the return value of any program executed in the shell, including a C program.

```bash
[phunc20@homography-x220t 07-function]$ gcc 02_return_0.c
[phunc20@homography-x220t 07-function]$ ./a.out
[phunc20@homography-x220t 07-function]$ echo $?
0
[phunc20@homography-x220t 07-function]$ gcc 03_return_1.c
[phunc20@homography-x220t 07-function]$ ./a.out
[phunc20@homography-x220t 07-function]$ echo $?
1
[phunc20@homography-x220t 07-function]$ gcc 04_return_999.c
[phunc20@homography-x220t 07-function]$ ./a.out
[phunc20@homography-x220t 07-function]$ echo $?
231
[phunc20@homography-x220t 07-function]$ gcc 05_return_-7.c
[phunc20@homography-x220t 07-function]$ ./a.out
[phunc20@homography-x220t 07-function]$ echo $?
249
[phunc20@homography-x220t ~]$ python -c "print(999 % 256)"
231
[phunc20@homography-x220t ~]$ python -c "print(-7 % 256)"
249
```

