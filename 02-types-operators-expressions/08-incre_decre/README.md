
```bash
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ gcc 01_diff.c
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ ./a.out
int m = 5;
int n = 5;
int x,y;
x = m++;
y = ++n;
x = 5
y = 6
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ gcc 02_expr_illegal.c
02_expr_illegal.c: In function ‘main’:
02_expr_illegal.c:6:18: error: lvalue required as increment operand
    6 |   int k = (m + n)++;
      |                  ^~
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ cat 02_expr_illegal.c
#include <stdio.h>

int main(int argc, char **argv) {
  int m = 5;
  int n = 5;
  int k = (m + n)++;
  return 0;
}
```


## `03_precedence.c`
The `i = j = 0` inside `for (i = j = 0; i < 2; ++i)` means **`i = (j = 0)`**, thus initializing both `i` and
`j` to `0`.

```bash
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ cat 03_precedence.c
#include <stdio.h>

int main(int argc, char **argv) {
  int i;
  int j = 5;
  for (i = j = 0; i < 2; ++i) {
    printf("i = %d\n", i);
    printf("j = %d\n", j);
  }

  return 0;
}
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ gcc 03_precedence.c
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ ./a.out
i = 0
j = 0
i = 1
j = 0


```

## `squeeze.c`
Just note that one has to compile the c file `squeeze.c` along with the one containing the `main`, `04_squeeze_test.c`:<br>
**`gcc 04_squeeze_test.c squeeze.c`**
```bash
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ cat squeeze.c
/* squeeze: delete all c from s */
void squeeze(char s[], int c) {
  // Note that we don't have to worry s being not big enough because
  // squeeze will always make s smaller.
  int i, j;
  for (i = j = 0; s[i] != '\0'; ++i) {
    if (s[i] == c)
      ;
    else
      s[j++] = s[i];
  }
  s[j] = '\0';
}
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ cat squeeze.h
void squeeze(char s[], int c);
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ cat 04_squeeze_test.c
#include <stdio.h>
#include "squeeze.h"

int main(int argc, char **argv) {
  char s[50] = "It rains cats and dogs!";
  char c = 's';
  squeeze(s, c);
  printf("squeeze(s, c) gives: s = %s\n", s);
  return 0;
}
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ gcc 04_squeeze_test.c squeeze.c
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ ./a.out
squeeze(s, c) gives: s = It rain cat and dog!
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯
```

## `strcat()`
```bash
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ gcc 05_strcat_big_enough.c strcat.c
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ ./a.out
stringcat(s, t); gives: s = It rainscats and dogs!
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ cat 05_strcat_big_enough.c
#include <stdio.h>
#include "strcat.h"

int main(int argc, char **argv) {
  char s[50] = "It rains";
  char t[50] = "cats and dogs!";
  stringcat(s, t);
  printf("stringcat(s, t); gives: s = %s\n", s);
  return 0;
}
```
**(?)** Why when it's too small it still works?
```bash
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ gcc 06_strcat_too_small.c strcat.c
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ ./a.out
stringcat(s, t); gives: s = It rainscats and dogs!
~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ cat 06_strcat_too_small.c
#include <stdio.h>
#include "strcat.h"

int main(int argc, char **argv) {
  char s[10] = "It rains";
  char t[50] = "cats and dogs!";
  stringcat(s, t);
  printf("stringcat(s, t); gives: s = %s\n", s);
  return 0;
}
```
- `my_strcat.c`
  ```bash
  ~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ gcc 07_test_my_strcat.c my_strcat.c
  ~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ ./a.out
  my_strcat(s, t); gives: s = It rainscats and dogs!
  ~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ cat 07_test_my_strcat.c
  #include <stdio.h>
  #include "my_strcat.h"
  
  int main(int argc, char **argv) {
    char s[50] = "It rains";
    char t[50] = "cats and dogs!";
    my_strcat(s, t);
    printf("my_strcat(s, t); gives: s = %s\n", s);
    return 0;
  }
  ~/.../C-Kernighan-Ritchie/02-types-operators-expressions/08-incre_decre ❯❯❯ cat my_strcat.c
  #include <string.h>
  
  void my_strcat(char s[], char t[]) {
    int j = 0;
    // We first find the index of '\0' in s
    int i = strlen(s);
    while ((s[i++] = t[j++]) != '\0')
      ;
  }
  ```
