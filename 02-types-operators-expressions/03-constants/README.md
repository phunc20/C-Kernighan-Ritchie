## Constants
```bash
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/03-constants ❯❯❯ ./a.out
123.4 = 123.400000
1e-2 = 0.010000
123.4e-2 = 1.234000
123.4f = 123.400002
1e-2F = 0.010000
123.4e-2l = 0.000000
123.456789e-2L = 0.000000
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/03-constants ❯❯❯ vim 02_float.c
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/03-constants ❯❯❯ cat 02_float.c
#include <stdio.h>

int main() {
        printf("123.4 = %f\n", 123.4);
        printf("1e-2 = %f\n", 1e-2);
        printf("123.4e-2 = %f\n", 123.4e-2);
        // By default the aboves are of type double
        printf("123.4f = %f\n", 123.4f);
        printf("1e-2F = %f\n", 1e-2F);
        //printf("123.4e-2lf = %f\n", 123.4e-2lf);  // Wrong!
        printf("123.4e-2l = %f\n", 123.4e-2l);
        //printf("123.456789e-2LF = %f\n", 123.456789e-2LF);  // Wrong!
        printf("123.456789e-2L = %f\n", 123.456789e-2L);
}
```

## Octal and hexadecimal
```bash
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/03-constants ❯❯❯ gcc 03_octal_hexadecimal.c
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/03-constants ❯❯❯ ./a.out
037 = 31
0x1f = 31
0X1f = 31
0X1F = 31
0XFUL = 15
```

## equality
```bash
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/03-constants ❯❯❯ gcc 04_equal.c
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/03-constants ❯❯❯ ./a.out
In C,
2 equals 2.0
2.0 equals 2
int c = 2;
c equals 2.0
float d = 2.0;
d equals 2
```



```bash
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/03-constants ❯❯❯ gcc 10_string.c
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/03-constants ❯❯❯ ./a.out
Hello, world!
I am a string
Me, too~
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/03-constants ❯❯❯ cat 10_string.c
#include <stdio.h>

int main() {
        printf("Hello," " world!\n");
        //printf("\\0 = %%d: %d(mark)\n", '\0');
        printf(""
                           "I am a string\n"
                                 "Me, too~\n");
}
```


