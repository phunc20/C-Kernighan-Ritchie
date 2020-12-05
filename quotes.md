01. intro
  - A character written btw single quotes represents an **integer** value equal to the **numerical value of the character** in the **machine's character set**. This is called a **_character constant_**, which is just another way to write a **small integer**. (p.19, 1.5.3)
  - `||` and `&&` are equivalents of `or` and `and`, in C and in Python, respectively. `&&`'s precedence is higher than `||`. Expressions like `(c == ' ' || c == '\n' | c == '\t')` are **evaluated left to right**, and it is guaranteed that evaluation will **stop as soon as the truth or falsehood is known**. Taking the previous example: if `c` is blank, there is no need to test whether it is a newline or tab. (p.21, 1.5.4)
  - In all character sets, `0`,`1`,`2`,`3`,`4`,`5`,`6`,`7`,`8`,`9` have consecutive increasing values.
  - a return value of **zero** implies **normal termination**; **non-zero** values signal **unusual or erroneous termination**.
  - Usually, C is **call by value**, **but when it comes to an array**, when it is an argument of some function, it is **the address of the first element** of the array which is being passed into the function. And consequently, an array **can be modified** inside a function.
  - `\0` (_**null character**_, whose value equals `0`) marks the end of a string.

05. pointers and arrays
  - The address operator `&` only applies to objects in memory: **variables** and **array elements**. It cannot be applied to expressions, constants, or `register` variables.
  - A pointer is constrained to point to a particular kind of object: every pointer points to a specific data type. (There is one exception: a "pointer to `void`" is used to hold any type of pointer but cannot dereferenced by itself. (cf. more on this in Section 5.11.)
  - If `a` is some array (regardless of its data type), and if `pa` is a pointer to some element of `a`, say to `a[0]`, then `pa + 1` will be a pointer to `a[1]`, `pa+i` a pointer to `a[i]`.
  - In evaluating `a[i]`, where `a` is some array, C converts it to `*(a+i)`. As the other side of this coin, if `a` is some array and if `pa` points to `a[0]`, then `pa[i]` is the same as `a[i]` and as `*(pa+i)`.
  - **Caveat**: Say, `a` is some array and `pa` a variable, then
    - The expressions `pa = a` and `pa++` are legal;
    - The expressions `a = pa` and `a++` are legal;
    - `a` is regarded as an **array name** whereas `pa` a **variable**


## Not quote but
- After each of `if`, `for`, `while`, etc. can be
  - either **a single line of code**
  - or a block of lines of code **put inside braces**
- _function prototype_, _function definition_, _function use_ (the parameters in prototype and definition only need to be consistent in type, not in naming. Cf. example on p.25)
  - Moreover, parameter names are even **optional** in function prototype, e.g. `int power(int, int);` can be a legitimate function prototype.
  - **Well-chosen parameter names** in function prototypes are **good documentation though**.
