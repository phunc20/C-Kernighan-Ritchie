## No need of header files still compiles
```bash
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/01-basics ❯❯❯ ll
total 32K
-rw-r--r-- 1 leif leif 175 Jan 10 16:54 ould.txt
-rw-r--r-- 1 leif leif 252 Jan 10 17:20 strindex.c
-rw-r--r-- 1 leif leif 405 Jan 10 17:27 getline.c
-rw-r--r-- 1 leif leif 488 Jan 10 17:28 main.c
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/01-basics ❯❯❯ cc strindex.c getline.c main.c
main.c:12:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
   12 | main() {
      | ^~~~
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/01-basics ❯❯❯ ll
total 32K
-rw-r--r-- 1 leif leif 175 Jan 10 16:54 ould.txt
-rw-r--r-- 1 leif leif 252 Jan 10 17:20 strindex.c
-rw-r--r-- 1 leif leif 405 Jan 10 17:27 getline.c
-rw-r--r-- 1 leif leif 488 Jan 10 17:28 main.c
-rwxr-xr-x 1 leif leif 16K Jan 10 17:28 a.out
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/01-basics ❯❯❯ ./a.out < ould.txt
Ah Love! could you and I with Fate conspire
Would not we shatter it to bits -- and then
Re-mould it nearer to the Heart's Desire!
^C
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/01-basics ❯❯❯ cat ould.txt
Ah Love! could you and I with Fate conspire
To grasp this sorry Scheme of Things entire,
Would not we shatter it to bits -- and then
Re-mould it nearer to the Heart's Desire!
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/01-basics ❯❯❯ cat ould.txt | ./a.out
Ah Love! could you and I with Fate conspire
Would not we shatter it to bits -- and then
Re-mould it nearer to the Heart's Desire!
^C
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/01-basics ❯❯❯
```

## `MAXLEN`
What would happen with a much smaller `MAXLEN`?
- It will take small strings
- A single line will be processed many times, each time taking a small substring.
```bash
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/01-basics ❯❯❯ grep define main.c
//#define MAXLEN 1000    /* maximum input line length */
#define MAXLEN 8    /* maximum input line length */
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/01-basics ❯❯❯ gcc *.c
main.c:13:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
   13 | main() {
      | ^~~~
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/01-basics ❯❯❯ ./a.out < ould.txt
! could
Would n
^C
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/01-basics ❯❯❯ ./a.out
coud you
could you tell me
could y
not every one would do that
would d
re-mould
Re-mould
Remould
Remould
^C
~/.../C-Kernighan-Ritchie/04-fn_and_prog_structure/01-basics ❯❯❯
```
