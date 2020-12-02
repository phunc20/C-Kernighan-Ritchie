- A character written btw single quotes represents an **integer** value equal to the **numerical value of the character** in the **machine's character set**. This is called a **_character constant_**, which is just another way to write a **small integer**. (p.19, 1.5.3)
- `||` and `&&` are equivalents of `or` and `and`, in C and in Python, respectively. `&&`'s precedence is higher than `||`. Expressions like `(c == ' ' || c == '\n' | c == '\t')` are **evaluated left to right**, and it is guaranteed that evaluation will **stop as soon as the truth or falsehood is known**. Taking the previous example: if `c` is blank, there is no need to test whether it is a newline or tab. (p.21, 1.5.4)




## Not quote but
- After each of `if`, `for`, `while`, etc. can be
  - either **a single line of code**
  - or a block of lines of code **put inside braces**
