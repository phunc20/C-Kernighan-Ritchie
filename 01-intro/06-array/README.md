## Arrays

```bash
[phunc20@homography-x220t 06-array]$ gcc 01_frequency.c
[phunc20@homography-x220t 06-array]$ cat 01_frequency.c | ./a.out
digits = 9 3 0 0 0 0 0 0 0 1, white space = 153, other = 343
[phunc20@homography-x220t 06-array]$ cat 01_frequency.c
#include <stdio.h>

int main() {
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = (nother = 0);
  for (i = 0; i < 10; ++i)
    ndigit[i] = 0;

  // Statistics
  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      ++ndigit[c - '0'];
    else if (c == ' ' || c == '\t' || c == '\n')
      ++nwhite;
    else
      ++nother;

  // print results
  printf("digits =");
  for (i=0;i<10;++i)
    printf(" %d", ndigit[i]);
  printf(", white space = %d, other = %d\n",
      nwhite, nother);
}
```

## `exo-01-13.c`
```bash
[phunc20@homography-x220t 06-array]$ gcc exo-01-13.c
exo-01-13.c: In function ‘main’:
exo-01-13.c:26:19: warning: multi-character character constant [-Wmultichar]
   26 |           putchar('▮');
      |                   ^~~
[phunc20@homography-x220t 06-array]$ vim exo-01-13.c  # replacing '▮' by '*'
[phunc20@homography-x220t 06-array]$ gcc exo-01-13.c
[phunc20@homography-x220t 06-array]$ cat exo-01-13.c | ./a.out
#include        ********
<stdio.h>       *********
/*              **
Description:    ************
*               *
For             ***
each            ****
word,           *****
print           *****
its             ***
length          ******
so              **
that            ****
the             ***
overall         *******
stdout          ******
becomes         *******
a               *
histogram       *********
*               *
*               *
Idea:           *****
*               *
-               *
print           *****
word            ****
postpended      **********
by              **
spaces          ******
to              **
16              **
spaces          ******
*               *
-               *
print           *****
(word           *****
length)         *******
#               *
of              **
▮             ***
upon            ****
encountering    ************
whites          ******
*/              **
#define         *******
IN              **
1               *
#define         *******
OUT             ***
0               *
#define         *******
MAXLEN          ******
16              **
int             ***
main()          ******
{               *
int             ***
i,              **
state,          ******
c,              **
len;            ****
//              **
len             ***
for             ***
"length"        ********
state           *****
=               *
OUT;            ****
len             ***
=               *
0;              **
while           *****
((c             ***
=               *
getchar())      **********
!=              **
EOF)            ****
{               *
if              **
(c              **
==              **
'               *
'               *
||              **
c               *
==              **
'\n'            ****
||              **
c               *
==              **
'\t')           *****
{               *
if              **
(state          ******
==              **
IN)             ***
{               *
for             ***
(i              **
=               *
0;              **
i               *
<               *
(MAXLEN         *******
-               *
len);           *****
++i)            ****
putchar('       *********
');             ***
for             ***
(i              **
=               *
0;              **
i               *
<               *
len;            ****
++i)            ****
putchar('*');   *************
putchar('\n');  **************
len             ***
=               *
0;              **
}               *
state           *****
=               *
OUT;            ****
}               *
else            ****
{               *
putchar(c);     ***********
++len;          ******
state           *****
=               *
IN;             ***
}               *
}               *
}               *
[phunc20@homography-x220t 06-array]$
```

## `exo-01-14.c`
```bash
[phunc20@homography-x220t 06-array]$ gcc exo-01-14.c
[phunc20@homography-x220t 06-array]$ cat exo-01-14.c | ./a.out
! **
" **
# ******
$
%
& **
' *******************
( ************************
) ************************
* **************
+ ***************
, ******
- *******
. ***
/ **********************************************
0 **********
1 *****
2 ***
3 *****
4
5
6 ***
7
8
9
: **
; *****************************
< *******
= *************************
> **
?
@
A ******
B
C
D *
E **
F **
G
H *
I ************
J
K
L *
M **************
N ************
O *****
P
Q
R
S *
T ***
U ***
V
W
X ******
Y
Z
[ ****
\ ****
] ****
^
_ **
`
a *********************************
b ****
c ******************************************
d ***************
e *****************************************************
f ********************
g ********
h ***********************
i *****************************************
j
k *
l *****************
m ******
n **************************************
o **************************
p *******************
q ****
r *************************************
s ************************
t ******************************************************
u *************
v *
w *****
x **
y **
z
{ ******
| ****
} ******
~ *
[phunc20@homography-x220t 06-array]$
```



