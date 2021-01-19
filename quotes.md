01. intro
  - A character written btw single quotes represents an **integer** value equal to the **numerical value of the character** in the **machine's character set**. This is called a **_character constant_**, which is just another way to write a **small integer**. (p.19, 1.5.3)
  - `||` and `&&` are equivalents of `or` and `and`, in C and in Python, respectively. `&&`'s precedence is higher than `||`. Expressions like `(c == ' ' || c == '\n' | c == '\t')` are **evaluated left to right**, and it is guaranteed that evaluation will **stop as soon as the truth or falsehood is known**. Taking the previous example: if `c` is blank, there is no need to test whether it is a newline or tab. (p.21, 1.5.4)
  - In all character sets, `0`,`1`,`2`,`3`,`4`,`5`,`6`,`7`,`8`,`9` have consecutive increasing values.
  - a return value of **zero** implies **normal termination**; **non-zero** values signal **unusual or erroneous termination**.
  - Usually, C is **call by value**, **but when it comes to an array**, when it is an argument of some function, it is **the address of the first element** of the array which is being passed into the function. And consequently, an array **can be modified** inside a function.
  - `\0` (_**null character**_, whose value equals `0`) marks the end of a string.

02. types, operators and expressions
  - The names of variables and symbolic constants are made up of letters and digits; the first character must be a letter. The underscore `_`  counts as a letter. Don't begin variable names with underscore, however, since library routines often use such names. Traditional C practice is to use lower case for variable names, and all upper case for symbolic constants.
  - Names in diff enumerations must be distinct. Values need not be distinct in the same enumeration.
  ```c
  enum escapes { BELL = '\a', BACKSPACE = '\b', TAB = '\t',
                 NEWLINE = '\n', VTAB = '\v', RETURN = '\r' };
  enum months { JAN = 1, FEB, MAR, APR, MAY, JUN,
                JUL, AUG, SEP, OCT, NOV, DEC };
                      /* FEB is 2, MAR is 3, etc. */
  ```
  - The `%` operator cannot be applied to `float` or `double`
  - **precedence**: (binary `+` and `-`) $<$ (binary `*`, `/` and `%`) $<$ (unary `+` and `-`)
  - **precedence** (relational operator): ( `>`, `>=`, `<`, `<=`) $>$ (`==` and `!=`) $>$ (arithmetic `+-*/%`)
  - **precedence** (logical operator): `&&` $>$ `||`
    - (relatioinal and equality operators) $>$ (`&&` and `||`)
    - `!=` $>$ `=` (i.e. assignment), e.g. `(c = getchar()) != '\n'`
  - Expressions connected by `&&` or `||` are evaluated left to right, and evaluation stops as soon as the truth or falsehood of the result is known.
  - In C, `0` means **false** and `1` means **true**
  - unary negation operator `!` converts non zero into `0` and zero into `1`
  - In `f + i`, where `f` and `i` are of type `int` and `float`, respectively, `i` is **first converted to a `float`** before the actual addition takes place.
  - `strcat(s, t)` concatenates the string `t` to the end of the string `s`. `strcat` assumes that there is enough space in `s` to hold the combination. The returned value of `strcat` is a pointer to the resulting string.
  - include header files from parent dir:
  ```bash
  ~/.../02-types-operators-expressions/09-bitwise_operators/exo-02-06 ❯❯❯ gcc test1.c setbits.c ../binary.c
  ~/.../02-types-operators-expressions/09-bitwise_operators/exo-02-06 ❯❯❯ ./a.out
  SET x = (607)_8 = (110000111)_2
  GET x = (607)_8 = (110000111)_2
  SET y = (5017)_8 = (101000001111)_2
  GET y = (5017)_8 = (101000001111)_2
  setbits(391,6,4,2575) = (777)_8 = (111111111)_2
  Expected result: (111111111)_2, i.e. (777)_8
  ~/.../02-types-operators-expressions/09-bitwise_operators/exo-02-06 ❯❯❯ grep include test1.c
  #include <stdio.h>
  #include "setbits.h"
  #include "../binary.h"
  ~/.../02-types-operators-expressions/09-bitwise_operators/exo-02-06 ❯❯❯
  ```
  - Most binary operators can form _assignment operator_ like `a -= 3`. To list a few of them: `+ - * / % << >> & ^ |`, e.g.
    - `expr1 op= expr2` is equiv. to `expr1 = (expr1) op (expr2)`
    - Consequently, `x *= y+1` means `x = x * (y+1)` and **not** `x = x * y + 1`
  - Assignment operators' raison d'etre 
    - For complicated expression like `yyval[yypv[p3+p4] + yypv[p1+p2]] += 2`, assignment operator prevents the reader from painstaking reading of the code
    - An assignment operator may even help a compiler to produce efficient code
  - If any `expression` is true, the `statement` associated with it is executed, and this terminates the whole chain
    ```
    if (expression)
      statement
    else if (expression)
      statement
    else if (expression)
      statement
    else if (expression)
      statement
    else
      statement
    ```
03. control flow
  - `switch`. All case expressions must be diff. The case labeled `default` is executed if none of the other cases are satisfied. A `default` is optinal; if it isn't there and if none of the cases match, no action at all takes place. Cases and the default clause can occur in any order.
  ```c
  switch (expression) {
    case const-expr: statements
    case const-expr: statements
    default: statements
  }
  ```
  - The following two general for loop and while loop are equiv. The `expr1`, `expr2` and `expr3` can all be omitted (so to make an infinite loop using `for`: **`for (;;)`**)
  ```c
  /* a general for loop */
  for (expr1; expr2; expr3)
    statement
  /* a general while loop */
  expr1;
  while (expr2) {
    statement
    expr3;
  }
  ```
  - `for (i=0; expr; ++i)`. When exiting a for loop like this, `i` will retain its last value when still inside the loop.

04. functions and program structure
  - If the return type of a function is omitted, `int` is assumed.
  - A function's `return expr` will be converted to the return type of the function if necessary.
  - function declaration: If a function takes no arguments, declare it
    - best with **`double my_super_fn(void);`**, say the return type is `double`
    - worse with `double my_super_fn();`, i.e. nothing
  - Some compiler, when compile the following, will warn of losing info during implicit type conversion
  ```c
  /* atoi: convert string s to integer using atof */
  int atoi(char s[]) {
    double atof(char s[]);
    return atof(s);
  }
  ```
  One way to suppress the warning is to explicitly cast it:
  ```c
  /* atoi: convert string s to integer using atof */
  int atoi(char s[]) {
    double atof(char s[]);
    return (int) atof(s);
  }
  ```
  - **external** and **internal**
    - The term "**internal**" is used to describe things **inside** a function such as the arguments, declared variables, etc.
    - Common **external** objects are variables and functions.
    - A C program consists of a set of external objects.
    - <s>C does not allow any function to be defined inside any other function.</s> (Unlike Python, Scala, Julia)
  - diff functions can use the same external variable(s) to communicate data btw them
  - Reverse Polish notation [selon Computerphile](https://www.youtube.com/watch?v=7ha78yWRDlE&t=1s)
  - L'ecriture `push(pop() - pop())` (stack; reverse Polish notation) is problematic, because the order in which the two calls of `pop` are evaluated is **not defined**.
05. pointers and arrays
  - A pointer is a variable that contains the address of another variable.
  - `void *`, a generic pointer
  - The `&` operator only applies to objects in memory: variables and array elements. It cannot be applied to expressions, constants, or `register` variables.
  - The unary operator `*` is called the _indirection_ or _dereferencing_ operator; when applied to a pointer, it accesses the object the pointer points to.
  - The address operator `&` only applies to objects in memory: **variables** and **array elements**. It cannot be applied to expressions, constants, or `register` variables.
  ```c
  int x = 1, y = 2, z[10];
  int *ip;       /* ip is a pointer to int */

  ip = &x;       /* ip now points to x */
  y = *ip;       /* y is now 1 */
  *ip = 0;       /* x is now 0 */
  ip = &z[7];    /* ip now points to z[7] */
  ```
  - The way `int *ip` is written is intended to be mnemonic; it says that the expression `*ip` is an `int`.
  - A pointer is constrained to point to a particular kind of object: every pointer points to a specific data type. (There is one exception: a "pointer to `void`" is used to hold any type of pointer but cannot dereferenced by itself. (cf. more on this in Section 5.11.)
  - If `ip` points to some integer `x`, then `*ip = *ip + 10` has the same effect as `x = x + 10`.
  - `*ip += 1`, `++*ip` and `(*ip)++` all mean the same thing: Increment the object that `ip` points to by `1`.
  - If `a` is some array (regardless of its data type), and if `pa` is a pointer to some element of `a`, say to `a[0]`, then `pa + 1` will be a pointer to `a[1]`, `pa+i` a pointer to `a[i]`.
  - In evaluating `a[i]`, where `a` is some array, C converts it to `*(a+i)`. As the other side of this coin, if `a` is some array and if `pa` points to `a[0]`, then `pa[i]` is the same as `a[i]` and as `*(pa+i)`.
  - **Caveat**: Say, `a` is some array and `pa` a variable, then
    - The expressions `pa = a` and `pa++` are legal;
    - The expressions `a = pa` and `a++` are legal;
    - `a` is regarded as an **array name** whereas `pa` a **variable**
  - The design of `alloc` and of `afree` is a stack, or a last-in, first-out list. That is, when we allocation some `a` and then some `b`, if we want to deallocate `a` at this moment, we must first `afree(b)` before we can `afree(a)`.
    - `malloc` and `free` in the standard library have no such restrictions.


## Not quote but
- After each of `if`, `for`, `while`, etc. can be
  - either **a single line of code**
  - or a block of lines of code **put inside braces**
- _function prototype_, _function definition_, _function use_ (the parameters in prototype and definition only need to be consistent in type, not in naming. Cf. example on p.25)
  - Moreover, parameter names are even **optional** in function prototype, e.g. `int power(int, int);` can be a legitimate function prototype.
  - **Well-chosen parameter names** in function prototypes are **good documentation though**.
