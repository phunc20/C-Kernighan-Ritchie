## `atof`
```bash
[phunc20@tako-x60 02-return_non_int]$ gcc utils.c ab_test_atof.c
[phunc20@tako-x60 02-return_non_int]$ ./a.out
atof(-31.495) = -31.495000
another_atof(-31.495) = -31.495000

atof(.495) = 0.495000
another_atof(.495) = 0.495000

atof(+1234.5678) = 1234.567800
another_atof(+1234.5678) = 1234.567800

atof(2,71828) = 2.000000
another_atof(2,71828) = 2.000000
[phunc20@tako-x60 02-return_non_int]$
```

## Rudimentary Calculator
```bash
[phunc20@tako-x60 02-return_non_int]$ gcc ac_rudimentary_calculator.c utils.c ../01-basics/getline.c
[phunc20@tako-x60 02-return_non_int]$ ./a.out
+0.1234
        0.1234
-0.023
        0.1004
3.14159
        3.24199
-2.71828
        0.52371
.9999
        1.52361
^C
[phunc20@tako-x60 02-return_non_int]$
```

## `atoi`
```bash
[phunc20@tako-x60 02-return_non_int]$ gcc ad_atoi.c utils.c ../01-basics/getline.c
[phunc20@tako-x60 02-return_non_int]$ ./a.out
-100
        -100
987
        887
-543
        344
-0344
        0
+333
        333
-333
        0
+01234
        1234
-01234
        0
001234
        1234
-0123
        1111
^C

```
