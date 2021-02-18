#include <stdio.h>
#include <stdlib.h>  /* To use srand(), rand(), qsort() */
#include <time.h>    /* To use time() along with srand() */


int cmpfunc (const void * a, const void * b) {
  return ( *(int*)a - *(int*)b );
}


int main(int argc, char **argv) {
  srand(time(NULL));
  int len = 10;
  int v[len];
  int i;
  printf("(Before qsort(v)) ");
  printf("v = {");
  for (i=0; i<len; i++) {
    v[i] = rand() % len;
    printf("%d,", v[i]);
  }
  printf("}\n");

  int left = 0;
  int right = len-1;
  //qsort(v, left, right);
  qsort(v, len, sizeof(int), cmpfunc);
  printf("(After qsort(v)) ");
  printf("v = {");
  for (i=0; i<len; i++) {
    printf("%d,", v[i]);
  }
  printf("}\n");

  return 0;
}
