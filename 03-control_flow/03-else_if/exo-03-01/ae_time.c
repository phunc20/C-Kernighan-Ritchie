#include <stdio.h>
#include <stdlib.h>
#include <time.h>    // for clock_t, clock() and CLOCKS_PER_SEC
#include <unistd.h>  // for sleep()
#include "../utils.h"

int main(int argc, char **argv) {
  //int len = (1 << 31) - 1;  // coredump
  //int len = 1 << 30;        // coredump
  int len = 99999;          // Takes about 13s on Thinkpad X200
  //int len = 9999999;        // coredump
  //int len = 999999;         // Takes eternity on Thinkpad X200
  //int len = 199999;         // Takes about 1m on Thinkpad X200

  int A[len];
  double elapsed_time;
  clock_t begin, end;
  begin = time(NULL);
  printf("Sorting A ...\n");
  randint_isort(A, len);
  end = time(NULL);
  printf("Finish sorting. Took elapsed_time = %d\n", end - begin);
  elapsed_time = end - begin;
  printf("\n");
  //printf("A = {");
  //for (int i=0; i<len; ++i) {
  //  printf("%d%s", A[i], (i == len-1) ? "}\n" : ", ");
  //}

  int index;
  //index = len - 1;
  index = rand() % len;
  int x = A[index];
  printf("len = %d\n", len);
  printf("x = A[%d]\n", index);
  printf("\n");

  begin = time(NULL);
  printf("exo_binsearch2(x, A, len) = %d\n", exo_binsearch2(x, A, len));
  end = time(NULL);
  elapsed_time = end - begin;
  printf("elapsed_time = %d\n", end - begin);
  //printf("elapsed_time = %d\n", elapsed_time);

  begin = time(NULL);
  printf("binsearch(x, A, len) = %d\n", binsearch(x, A, len));
  end = time(NULL);
  elapsed_time = end - begin;
  printf("elapsed_time = %d\n", end - begin);
  //printf("elapsed_time = %d\n", elapsed_time);

  return 0;
}
