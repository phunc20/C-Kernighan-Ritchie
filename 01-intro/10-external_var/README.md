## `extern` keyword
```bash
[phunc20@homography-x220t 10-external_var]$ cat 01_extern.c
#include <stdio.h>

/* This file is to be compared with
 * ../09-char_array/02_print_longest.c
 */

#define MAXLEN 1000  // maximum tolerated line length

int max_sofar;
char line[MAXLEN];
char longest[MAXLEN];

int getligne(void);
void copy(void);

int main() {
  int len;
  extern int max_sofar;
  extern char longest[];

  max_sofar = 0;
  while ((len = getligne()) > 0)
    if (len > max_sofar) {
      max_sofar = len;
      copy();
    }
  if (max_sofar > 0)
    printf("%s", longest);
  return 0;
}


int getligne() {
  extern char line[];
  int i, c;
  for (i=0; i < MAXLEN-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;
  if (c == '\n') {
    line[i] = '\n';
    ++i;
  }
  line[i] = '\0';
  return i;
}

void copy() {
  // copy line to longest
  extern char line[];
  extern char longest[];
  int i;
  i = 0;
  while ((longest[i] = line[i]) != '\0')
    ++i;
}
[phunc20@homography-x220t 10-external_var]$ gcc
01_extern.c  a.out
[phunc20@homography-x220t 10-external_var]$ gcc 01_extern.c
[phunc20@homography-x220t 10-external_var]$ cat 01_extern.c | ./a.out
  for (i=0; i < MAXLEN-1 && (c=getchar()) != EOF && c != '\n'; ++i)
[phunc20@homography-x220t 10-external_var]$ ls
```
