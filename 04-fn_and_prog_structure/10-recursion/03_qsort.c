#include <stdio.h>
#include <stdlib.h>  /* To use srand(), rand() */
#include <time.h>    /* To use time() along with srand() */

/* qqsort: sort v[left], ..., v[right] into increasing order */
/* Because in stdlib.h, there is already a function named qsort() */
/* we rename ours qqsort() */
void qqsort(int v[], int left, int right)
{
  int i, last;
  void swap(int v[], int i, int j);

  if (left >= right)  /* do nothing if array contains */
    return;           /* fewer than two elements */
  swap(v, left, (left + right)/2);  /* move partition elem */
  last = left;                      /* to v[0] */
  for (i = left+1; i <= right; i++)  /* partition */
    if (v[i] < v[left])
      swap(v, ++last, i);
  swap(v, left, last);  /* restore partition elem */
  qqsort(v, left, last-1);
  qqsort(v, last+1, right);
}

/* swap: interchange v[i] and v[j] */
/* Note that swap(v, i, i) will also work (i.e. when j == i). */
void swap(int v[], int i, int j)
{
  int temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

int main(int argc, char **argv) {
  srand(time(NULL));
  int len = 10;
  int v[len];
  int i;
  printf("(Before qqsort(v)) ");
  printf("v = {");
  for (i=0; i<len; i++) {
    v[i] = rand() % len;
    printf("%d,", v[i]);
  }
  printf("}\n");

  int left = 0;
  int right = len-1;
  qqsort(v, left, right);
  printf("(After qqsort(v)) ");
  printf("v = {");
  for (i=0; i<len; i++) {
    printf("%d,", v[i]);
  }
  printf("}\n");

  return 0;
}
