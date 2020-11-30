## Things in `#define` will be taken literally
```
#define name replacement_text
```
The future mention of `name` will literally substitute `replacement_text` into that position.
That's why there is `no need` to end lines of `#define` with a `;`


```bash
[phunc20@homography-x220t 04-symbolic_constants]$ vim what_if_add_semicolon.c
[phunc20@homography-x220t 04-symbolic_constants]$ cc what_if_add_semicolon.c
what_if_add_semicolon.c:9:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    9 | main()
      | ^~~~
what_if_add_semicolon.c: In function ‘main’:
what_if_add_semicolon.c:13:35: error: expected ‘)’ before ‘;’ token
   13 |   for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
      |       ~                           ^
[phunc20@homography-x220t 04-symbolic_constants]$ cp what_if_add_semicolon.c reproduce_same_error.c
[phunc20@homography-x220t 04-symbolic_constants]$ vim reproduce_same_error.c
[phunc20@homography-x220t 04-symbolic_constants]$ gcc reproduce_same_error.c
reproduce_same_error.c:9:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    9 | main()
      | ^~~~
reproduce_same_error.c: In function ‘main’:
reproduce_same_error.c:13:36: error: expected expression before ‘;’ token
   13 |   for (fahr = LOWER; fahr <= UPPER;; fahr = fahr + STEP)
      |                                    ^
[phunc20@homography-x220t 04-symbolic_constants]$ cp reproduce_same_error.c cure.c
[phunc20@homography-x220t 04-symbolic_constants]$ vim cure.c
[phunc20@homography-x220t 04-symbolic_constants]$ gcc cure.c
cure.c:9:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    9 | main()
      | ^~~~
[phunc20@homography-x220t 04-symbolic_constants]$ ./a.out
Fahrenheit Celsius
  0  -17.8
 20   -6.7
 40    4.4
 60   15.6
 80   26.7
100   37.8
120   48.9
140   60.0
160   71.1
180   82.2
200   93.3
220  104.4
240  115.6
260  126.7
280  137.8
300  148.9
[phunc20@homography-x220t 04-symbolic_constants]$
```
